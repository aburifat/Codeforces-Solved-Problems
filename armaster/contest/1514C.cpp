#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr ll MX=1e5;

bitset<100000009>bs;
vector<ll>primes;
void sieve(ll ub) {
    bs.set();
    ub++;
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(ll i=4; i<=ub; i+=2) bs[i]=0;
    for(ll i=3; i<=ub; i+=2) {
        if(bs[i]) {
            for(ll j=i*i; j<=ub; j+=i)
                bs[j]=0;
            primes.push_back(i);
        }
    }
}

vector<ll>PF(ll n) {
    vector<ll>fact;
    for (auto d:primes) {
        if(d*d>n)break;
        if(n%d==0) {
            fact.push_back(d);
            while(n%d==0) {

                n/=d;
            }
        }
    }
    if(n>1)fact.push_back(n);
    return fact;
}


ll exGCD(ll a, ll b, ll &x, ll &y) {
    if(b==0) {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll d=exGCD(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}


ll modInv(ll a, ll mod) {
    ll x, y;
    ll g=exGCD(a,mod,x,y);
    if(g!=1)
        return -1; //No Solution
    x=(x%mod+mod)%mod;
    return x;
}



int main() {
    sieve(MX);
    ll n;
    cin>>n;
    vector<ll>nfact=PF(n);
    //cout<<"OK\n";
    bitset<1000010>num;
    num.set();
    num[0]=0;
    ll len=nfact.size();
    for(ll i=0; i<len; i++) {
        ll pr=nfact[i];
        for(ll i=pr; i<n; i+=pr)num[i]=0;
    }
    ll val=1;
    for(ll i=2; i<n; i++) {
        if(num[i]==1) {
            val=(val*i)%n;
        }
    }
    ll rem=val%n;
    while(rem!=1) {
        val=val*modInv(rem,n);
        num[rem]=0;
        rem=val%n;
    }
    ll ct=0;
    for(ll i=1; i<n; i++) {
        if(num[i]==1)ct++;
    }
    cout<<ct<<endl;
    ll ck=0;
    for(ll i=1; i<n; i++) {
        if(num[i]==1) {
            if(ck==0)ck++;
            else cout<<" ";
            cout<<i;
        }
    }
    cout<<endl;
    return 0;
}