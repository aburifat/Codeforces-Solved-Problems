#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        ll arr[n+3];
        ll even=0,odd=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if((i%2==1)&&(arr[i]%2==0)){
                    //cout<<"i : "<<i<<endl;
                    even++;
            }
            else if((i%2==0)&&(arr[i]%2==1)){
                    //cout<<"i : "<<i<<endl;
                    odd++;
            }
        }
        //cout<<even<<" "<<odd<<"\n";;
        if(even==odd)cout<<even<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}

/*

4
4
3 2 7 6
3
3 2 6
1
7
7
4 9 2 1 18 3 0

*/