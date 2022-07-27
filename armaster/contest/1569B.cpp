#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){

	//freopen("input.io","r",stdin);
	//freopen("output.io","w",stdout);
    ll t;
    cin>>t;
    ll n;
    string s;
    while(t--){
        cin>>n>>s;
        n=s.length();
        ll ones=0,twos=0;
        vector<ll>pera;
        for(ll i=0;i<n;i++){
            if(s[i]=='1')ones++;
            else{
                twos++;
                pera.push_back(i);
                //cout<<i<<endl;
            }
        }
        char arr[n+5][n+5];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(i==j)arr[i][j]='X';
                else arr[i][j]='=';
            }
        }
        /*
        if(twos!=0&&twos<=ones){
            cout<<"NO\n";
        }else{
        */
            ll len=pera.size();
            ll ck1=0;
            for(ll i=0;i<len;i++){
                ll idx=pera[i];
                ll ck2=0;
                for(ll j=0;j<n;j++){
                    if((s[j]=='2')&&(arr[idx][j]=='=')){
                        arr[idx][j]='+';
                        arr[j][idx]='-';
                        ck2=1;
                        break;
                    }
                }
                if(ck2==0){
                    ck1=1;
                    break;
                }
            }
            if(ck1==0){
                cout<<"YES\n";
                for(ll i=0;i<n;i++){
                    for(ll j=0;j<n;j++){
                        cout<<arr[i][j];
                    }
                    cout<<"\n";
                }
            }else{
                cout<<"NO\n";
            }
        //}
    }
    return 0;
}