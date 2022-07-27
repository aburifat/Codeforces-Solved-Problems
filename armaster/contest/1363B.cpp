#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        ll ans=0;
        ll suffZeros=0,suffOnes=0,prefZeros=0,prefOnes=0;
        for(auto u:s){
            if(u=='0')suffZeros++;
            else suffOnes++;
        }
        ans=min(suffOnes,suffZeros); ///to make all zero or all one
        for(auto u:s){
            if(u=='0'){
                prefZeros++;
                suffZeros--;
            }else{
                prefOnes++;
                suffOnes--;
            }
            ans=min(ans,prefOnes+suffZeros); ///to make 00001111
            ans=min(ans,prefZeros+suffOnes); ///to make 11110000
        }
        cout<<ans<<endl;
    }
    return 0;
}