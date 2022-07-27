
/***********************بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم************************************/

#include<bits/stdc++.h>
using namespace std;

/******** A.R.M.Al.Hasib - elvengard *************/

#define     ins              insert
#define     pub              push_back
#define     pob              pop_back
#define     ll               long long int
#define     ull              unsigned long long int
#define     max3(a,b,c)      max(a,max(b,c))
#define     max4(a,b,c,d)    max(max3(a,b,c),d)
#define     min3(a,b,c)      min(a,min(b,c))
#define     min4(a,b,c,d)    min(a,min3(b,c,d))
#define     MOD              1000000007
#define     MAX              1000000000000014
#define     MIN              -100000000000014
#define     EPS              1e-8
#define     PI               (2*acos(0.0))
#define     all(v)           v.begin(),v.end()
#define     mii              map<int,int>
#define     mll              map<ll,ll>
#define     pii              pair<int,int>
#define     pll              pair<ll,ll>
#define     mpii             map<pii,int>
#define     mpll             map<pll,ll>
#define     vi               vector<int>
#define     vl               vector<ll>
#define     vpi              vector<pii>
#define     vpl              vector<pll>
#define     si               set<int>
#define     sl               set<ll>
#define     siit             set<int>::iterator
#define     slit             set<long long>::iterator
#define     msi              multiset<int>
#define     msl              multiset<ll>
#define     msiit            multiset<int>::iterator
#define     mslit            multiset<long long>::iterator
#define     frsit(it,myset)  for (it=myset.begin(); it!=myset.end(); ++it)
///                          use *it as the loop variable for set iteration..
#define     fast             ios_base::sync_with_stdio(0);cin.tie(0)
#define     F                first
#define     S                second
#define     mem(a,v)         memset(a,v,sizeof(a))
#define     mp               make_pair
#define     sq(x)           (x)*(x)
#define     dis(x1, y1, x2, y2) sqrt(sq(x1-x2)+sq(y1-y2))
#define     foi              freopen("input.txt","r",stdin);
#define     foo              freopen("output.txt","w",stdout);
#define     check            printf("check")
#define     nl               printf("\n")
#define     left(x)          ((x) << 1)
#define     right(x)         (((x) << 1) + 1)
#define     dbg(x)           cout << #x << " = " << x << endl
#define     gcd(a,b)         __gcd(a,b)
#define     lcm(a,b)         a*b/gcd(a,b)
#define     fri(i,n)         for(int i=0;i<n;i++)
#define     frl(i,n)         for(ll i=0;i<n;i++)
#define     frir(i,n)        for(int i=n-1;i>=0;i++)
#define     frlr(i,n)        for(ll i=n-1;i>=0;i++)
#define     wh(n)            while(n--)
#define     fxd(i,x)         std::fixed <<std::setprecision(i)<<(x)

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

#define bug printf("debug\n");
#define br puts("");

template<typename t>
t abs(t a)
{
    if(a>=0)
        return a;
    return -a;
}
//error
#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); puts(""); }

vector<string> split(const string& s, char c)
{
    vector<string> v;
    stringstream ss(s);
    string x;
    while (getline(ss, x, c))
        v.emplace_back(x);
    return move(v);
}

void err(vector<string>::iterator it) {}
template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args)
{
    cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << "  ";
    err(++it, args...);
}
//end

/************************ End *************************/



int main(){
    fast;
    int n,m,tmp, tmp2;
    ll ans=0;
    vi v;
    cin>>n>>m;
    fri(i,n){
        cin>>tmp;
        v.pub(tmp);
    }
    fri(i,m){
        cin>>tmp>>tmp2;
        ans+=min(v[tmp-1],v[tmp2-1]);
    }
    cout<<ans<<endl;
    return 0;
}

/**************************الحمد لله************************************/

/**A.R.M. AL HASIB**/
/**Computer Science & Engineering**/
/**University of Barisal, Bangladesh**/