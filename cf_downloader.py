from getpass import getpass
import os, time, requests, sys, traceback
from bs4 import BeautifulSoup as bs


class ErrorException(Exception):

    def __init__(self, message):
        self.message = message

    def __str__(self):
        return __repr__(self.message)

    def get_message(self):
        return self.message
        

class Submission:

    extensions = ((
            ('++', 'cpp'),
            ('GNU C', 'c'), 
            ('JavaScript', 'js'),
            ('Java', 'java'),
            ('Py', 'py'),
            ('Delphi', 'dpr'),
            ('FPC', 'pas'),
            ('C#', 'cs'),
            ('D', 'd'),
            ('Q#', 'qs'),
            ('Node', 'js'),
            ('Kotlin', 'kt'),
            ('Go', 'go'),
            ('Ruby', 'rb'),
            ('Rust', 'rs'),
            ('Perl', 'pl'),
            ('Scala', 'scala'),
            ('PascalABC', 'pas'),
            ('Haskell', 'hs'),
            ('PHP', 'php')
            ))

    def __init__(self, raw_data, gym, handle, merge):
        self.contest_id = raw_data['contestId']
        self.submission_id = raw_data['id']
        self.problem_index = raw_data['problem']['index']
        self.language = raw_data['programmingLanguage']
        self.problem = '{}{}'.format(self.contest_id, self.problem_index)
        self.contest_type = 'gym' if gym else 'contest'
        self.path = handle
        self.verdict=raw_data['verdict']

        if not merge:
            if self.contest_type == 'contest':
                self.path = os.path.join(self.path, 'contest')
            elif self.contest_type == 'gym':
                self.path = os.path.join(self.path, 'gym')
        self.set_extension()

    def set_extension(self):
        self.extension = ''
        for key, value in self.extensions:
            if key in self.language:
                self.extension = value
                break

    def get_id(self):
        return self.submission_id
    def get_verdict(self):
        return self.verdict
    def get_submission_id(self):
        return self.submission_id
    def get_contest(self):
        return self.contest_id
    
    def get_language(self):
        return self.language

    def get_index(self):
        return self.problem_index

    def get_problem(self):
        return self.problem

    def is_gym(self):
        return self.contest_type == 'gym'

    def get_directory(self):
        return self.path

    def get_path(self):
        return '{}.{}'.format(self.problem_index, self.extension)

    def __str__(self):
        return 'Submission: {}, Contest: {}, Problem: {}'.format(self.get_id(), self.get_contest(), self.get_index())


class Retriever:

    get_url = 'http://codeforces.com/{contest_type}/{contest_id}/submission/{submission_id}'

    #def __init__(self, cf_handle=None, cf_password=None, codeforces=None, get_regular=None, get_gym=None, split_gym=None, folders=None, verbose=True):
    def __init__(self, cf_handle='armaster', cf_password=None, codeforces=None, get_regular=1, get_gym=0, split_gym=1, folders=0, verbose=True):
        self.cf_handle = cf_handle
        self.cf_password = cf_password
        self.codeforces = codeforces
        self.get_regular = get_regular
        self.get_gym = get_gym
        self.split_gym = split_gym
        self.folders = folders
        self.verbose = verbose
   
    @staticmethod
    def check_path(path):
        if not os.path.exists(path):
            os.makedirs(path)
    
    @staticmethod
    def get_input(message):
        inp = ''
        while inp not in ('y', 'n'):
            inp = input(message).lower()
        return inp == 'y'
    
    def start(self):
        """
        if self.cf_handle is None:
            self.cf_handle = input('Enter your codeforces handle: ').lower()
        else:
            self.cf_handle = self.cf_handle.lower()
        if self.get_regular is None:
            self.get_regular = self.get_input('Download regular contests submissions? [y/n]: ')
        if self.get_gym is None:
            self.get_gym = self.get_input('Download gym contests submissions? [y/n]: ')
        if self.get_gym and self.cf_password is None:
            self.cf_password = getpass('Password is needed for gym contests, please enter your password: ')
        if self.split_gym is None:
            self.split_gym = self.get_input('Separate regular and gym contests in different folders?: [y/n] ')
        if self.folders is None:
                self.folders = self.get_input('Create folders separately for each contest? [y/n]: ')
        """
        if self.verbose:
            print('Starting AC Submission Download...')
        self.gym_set = set()
        self.contests_set = set()
        with requests.Session() as self.req:
            try:
                self.get_info()
                self.get_downloaded(self.cf_handle)
                self.errors = []
                if self.get_gym and self.gym_set:
                    if not self.login():
                        raise ErrorException('Invalid handle/password')
                    if self.split_gym:
                        self.check_path(os.path.join(self.cf_handle, 'gym'))
                    else:
                        self.check_path(self.cf_handle)
                if self.get_regular and self.contests_set:
                    if self.split_gym:
                        self.check_path(os.path.join(self.cf_handle, 'contest'))
                    else:
                        self.check_path(self.cf_handle)
                self.data = self.req.get('http://codeforces.com/api/user.status?handle={}'.format(self.cf_handle)).json()
                self.get_submissions()
                self.set_downloaded(self.cf_handle)
                if self.errors and self.verbose: 
                    print("Codeforces submissions for the following problems weren't downloaded:")
                    for error in set(self.errors):
                        print(error)
                    print('Run one more time to download them.')
                if self.verbose:
                    print('Done downloading codeforces submissions.')
            except ErrorException as e:
                if self.verbose:
                    print('Exception occured:\n{}'.format(e.get_message()))
            except KeyboardInterrupt:
                if self.downloaded:
                    self.set_downloaded(self.cf_handle)
                if self.verbose:
                    print('Keyboard interrupt (CTRL^C) was pressed, exiting.')
                exit(0)

    def login(self):
        page = self.req.get('https://codeforces.com/enter')
        soup = bs(page.text, 'html.parser')
        time.sleep(2)
        data = {}
        token = soup.find('input', {"name":"csrf_token"})["value"]
        data['handleOrEmail'] = self.cf_handle
        data['password'] = self.cf_password
        data['csrf_token'] = token
        data['action'] = 'enter'
        chk = self.req.post('https://codeforces.com/enter', data=data)
        soup = bs(chk.text, 'html.parser')
        ret = soup.find('input', {'name': 'handleOrEmail'}) is None
        return ret

    def get_info(self):
        for i, gym_status in enumerate(('false', 'true')):
            data = self.req.get('http://codeforces.com/api/contest.list?gym={}'.format(gym_status)).json()
            if data['status'] != 'OK':
                raise ErrorException('Error getting contests info.')
            for contest in data['result']:
                if i:
                    self.gym_set.add(contest['id'])
                else:
                    self.contests_set.add(contest['id'])

    def get_downloaded(self, handle):
        handle_path = handle
        path = os.path.join(handle_path, 'downloaded')
        self.check_path(handle_path)
        if not os.path.exists(path):
            self.downloaded = set()
        else:
            with open(path, 'r') as f:
                self.downloaded = set(f.read().splitlines())
    
    def set_downloaded(self, handle):
        handle_path = handle
        path = os.path.join(handle_path, 'downloaded')
        with open(path, 'w') as f:
            for x in self.downloaded:
                f.write(x + '\n')
        if self.errors:
            path = os.path.join(handle_path, 'errors')
            with open(path, 'w') as f:
                for x in self.errors:
                    f.write(x + '\n')

    def get_submissions(self):
        if self.data['status'] != 'OK':
            raise ErrorException('Error getting submission info.')
        submissions = (Submission(raw_data, raw_data['contestId'] in self.gym_set, self.cf_handle, self.split_gym is False) for raw_data in self.data['result'])
        for submission in submissions:
            if submission.get_problem() in self.downloaded or (submission.is_gym() and not self.get_gym) or (not submission.is_gym() and not self.get_regular):
                continue
            if submission.get_verdict() != 'OK':
                #print('Not AC, Skiping... {}'.format(submission))
                continue
            if self.verbose:
                print('Downloading --> {}'.format(submission))
            self.get_source_code(submission)
            if self.result == '':
                self.errors.append(submission.get_problem())
                continue
            self.process_submission(submission)
            
    def get_source_code(self, submission):
        contest_type = 'gym' if submission.is_gym() else 'contest'
        page = self.req.get(self.get_url.format(contest_type=contest_type, contest_id=submission.get_contest(), submission_id=submission.get_id()))
        time.sleep(2)
        soup = bs(page.text, 'html.parser')
        ret = soup.find(id='program-source-text')
        if ret is None:
            self.result = ''
        else:
            self.result = ret.text.rstrip()

    def process_submission(self, submission):
        if self.folders:
            problem_path = os.path.join(submission.get_directory(), str(submission.get_contest()))
            self.check_path(problem_path)
            file_path = os.path.join(problem_path, (str(submission.get_index()) + '.' + submission.extension))
        else:
            file_path = os.path.join(submission.get_directory(), submission.get_problem() + '.' + submission.extension)
        with open(file_path, 'w') as f:
            f.write('\n'.join(self.result.splitlines()))
        self.downloaded.add(submission.get_problem())

def main():
    retriever = Retriever()
    retriever.start()

if __name__ == '__main__':
    main()
