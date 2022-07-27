#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MX=1e5;

bitset<1000000>bs;
vector<ll>primes;
void sieve(ll ub){
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(ll i=4;i<=ub;i+=2)bs[i]=0;
    for(ll i=3;i<=ub;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=ub;j+=i){
                bs[j]=0;
            }
            primes.push_back(i);
        }
    }
}

vector<ll>PF(ll n)
{
    vector<ll>fact;
    for(auto d:primes){
        if(d*d>n)break;
        while(n%d==0){
            fact.push_back(d);
            n/=d;
        }
    }
    if(n>1)fact.push_back(n);
    return fact;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    sieve(MX);
    ll t;
    cin>>t;
    ll n;
    while(t--){
        cin>>n;
        if(n==1)cout<<"FastestFinger\n";
        else if(n%2!=0||n==2){
            cout<<"Ashishgup\n";
        }
        else{
            vector<ll>factors=PF(n);
            ll ct=0,even=0;
            ll len=factors.size();
            for(ll i=0;i<len;i++){
                if(factors[i]%2!=0)ct++;
                else even++;
            }
            if(even>1){
                if(ct>0)cout<<"Ashishgup\n";
                else cout<<"FastestFinger\n";
            }
            else if(ct>1)cout<<"Ashishgup\n";
            else cout<<"FastestFinger\n";
        }
    }
    return 0;
}