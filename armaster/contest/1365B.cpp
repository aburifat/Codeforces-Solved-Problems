#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        ll num=0;
        ll tmp,ck=0;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            if(tmp>=num)num=tmp;
            else ck++;
        }
        ll ones=0,zeros=0;
        for(ll i=0;i<n;i++){
            cin>>tmp;
            if(tmp)ones++;
            else zeros++;
        }
        if(!ck||(ones&&zeros))cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}

/*
5
4
10 20 20 30
0 1 0 1
3
3 1 2
0 1 1
4
2 2 4 8
1 1 1 1
3
5 15 4
0 0 0
4
20 10 100 50
1 0 0 1

*/