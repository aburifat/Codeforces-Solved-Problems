#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin>>t;
    ll n;
    while(t--) {
        ll even=0,odd=0;
        cin>>n;
        vector<ll>a;
        for(ll i=0; i<n; i++) {
            ll tmp;
            cin>>tmp;
            a.push_back(tmp);
            if(tmp%2==0)
                even++;
            else
                odd++;
        }
        sort(a.begin(),a.end());
        if((even%2==0)&&(odd%2==0))
            cout<<"YES"<<endl;
        else if((even%2!=0)&&(odd%2!=0)) {
            ll ck=1;
            for(int i=1; i<n; i++) {
                if((a[i]-a[i-1])==1) {
                    cout<<"YES"<<endl;
                    ck=0;
                    break;
                }
            }
            if(ck)
                cout<<"NO"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

/*
4
6
1 3 5 2 4 6
6
1 3 5 7 2 4
6
1 3 5 8 10 12
6
1 3 5 7 9 11

*/