#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cList[]= {2,11,101,1009,10007,100003,1000003,10000019,100000007};
ll powList[]= {1,10,100,1000,10000,100000,1000000,10000000,100000000};

int main()
{
    /*
    freopen("output.txt","w",stdout);

    for(ll j=1; j<10; j++)
    {
        for(ll k=1; k<10; k++)
        {
            for(ll i=1; i<min(j,k); i++)
            {
                ll c=cList[i-1];
                ll difa=j-i;
                ll difb=k-i;
                ll pwa=powList[difa];
                ll pwb=powList[difb];
                ll a=c*pwa;
                ll b=c*(pwb);
                ll g=__gcd(a,b);
                while(g!=c)
                {
                    pwb++;
                    b=c*(pwb);
                    g=__gcd(a,b);
                }
                cout<<a<<" "<<b<<" "<<c<<" "<<g<<"\n";
            }
        }
    }
    */
    ll t;
    cin>>t;
    ll a,b,c;
    while(t--){
        cin>>a>>b>>c;
        ll difa=a-c;
        ll difb=b-c;
        c=cList[c-1];
        ll powa=powList[difa];
        ll powb=powList[difb];
        ll a=c*powa;
        ll b=c*powb;
        ll g=__gcd(a,b);
        while(g!=c){
            powb++;
            b=c*powb;
            g=__gcd(a,b);
        }
        cout<<a<<" "<<b<<"\n";
    }

    return 0;
}