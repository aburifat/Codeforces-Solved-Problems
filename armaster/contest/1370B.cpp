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
        ll tmp;
        vector<ll>odd,even;
        for(ll i=1; i<=(2*n);i++){
            cin>>tmp;
            if(tmp%2==0)odd.push_back(i);
            else even.push_back(i);
        }
        ll len=odd.size();
        ll idxodd=0,idxeven=0;
        if(len){
            if(len%2==0)idxodd+=2;
            else{
                idxodd++;
                idxeven++;
            }
        }else{
            idxeven+=2;
        }

        for(ll i=idxodd;i<odd.size();i+=2){
            cout<<odd[i]<<" "<<odd[i+1]<<"\n";
        }
        for(ll i=idxeven;i<even.size();i+=2){
            cout<<even[i]<<" "<<even[i+1]<<"\n";
        }
    }
    return 0;
}

/*
3
3
1 2 3 4 5 6
2
5 7 9 10
5
1 3 3 4 5 90 100 101 2 3
*/