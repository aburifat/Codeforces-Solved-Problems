///Problem No: C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n, m;
    while(t--){
        cin>>n>>m;
        ll frnd[n+3];
        ll gift[m+3];
        ll taken[m+3];
        for(ll i=0;i<n; i++){
            cin>>frnd[i];
            frnd[i]--;
        }
        for(ll i=0;i<m;i++){
            cin>>gift[i];
            taken[i]=0;
        }
        sort(frnd,frnd+n);
        ll sum=0;
        ll pt=0;
        for(ll i=n-1;i>=0;i--){
            if((pt<m)&&pt<=frnd[i]){
                sum+=gift[pt];
                pt++;
            }else{
                sum+=gift[frnd[i]];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}