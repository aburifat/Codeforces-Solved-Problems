#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    ll n, m;
    while(t--) {
        cin>>n>>m;
        ll arr[n+3][m+3];
        ll ck=0;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                cin>>arr[i][j];
            }
        }
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<m; j++) {
                if((i==0&&j==0)||(i==n-1&&j==m-1)||(i==0&&j==m-1)||(i==n-1&&j==0)) {
                    if(arr[i][j]>2) {
                        ck=1;
                        break;
                    }
                    arr[i][j]=2;
                } else if(i==0||j==0||i==n-1||j==m-1) {
                    if(arr[i][j]>3) {
                        ck=1;
                        break;
                    }
                    arr[i][j]=3;
                } else {
                    if(arr[i][j]>4) {
                        ck=1;
                        break;
                    }
                    arr[i][j]=4;
                }
            }
            if(ck)break;
        }
        if(ck)cout<<"NO\n";
        else {
            cout<<"YES\n";
            for(ll i=0; i<n; i++) {
                for(ll j=0; j<m; j++) {
                    cout<<arr[i][j];
                    if(j<m-1)cout<<" ";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}