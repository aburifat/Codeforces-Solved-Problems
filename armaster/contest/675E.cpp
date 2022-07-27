#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 100009

ll arr[MX]; // Given array
ll P[MX][22]; //Sparse table
ll LG[MX]; //log array
ll ans[MX]; //keep ans here

void comp(ll &x, ll y){
    if(arr[x]<arr[y])x=y;
}

void prep(ll n)
{
    LG[0]=0;
    for(ll i=2; i<=n; i++)LG[i]=LG[i/2]+1;
    for(ll i=1; i<=n; i++)P[i][0]=i;
    for(ll j=1;j<22;j++){
        for (int i=1;i<=n-(1<<j)+1;i++){
            comp(P[i][j],P[i][j-1]);
            comp(P[i][j],P[i+(1<<(j-1))][j-1]);
        }
    }
}

ll Query(ll L, ll R)
{
    if(L>R)swap(L,R);
    //ll j=log(R-L+1)/log(2);
    ll j=LG[R-L+1];
    ll maxx=P[L][j];
    comp(maxx,P[R-(1<<j)+1][j]);
    return maxx;
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n;
    ll ANS=0;
    cin>>n;
    for(ll i=1; i<n; i++){
        cin>>arr[i];
    }
    prep(n);
    for(ll i=n-1;i>=1;i--){
        ll val=Query(i+1,arr[i]);
        ans[i]=ans[val]-(arr[i]-val)+n-i;
        ANS+=ans[i];
    }
    cout<<ANS<<endl;
    return 0;
}

/* input:

10
2 10 8 7 8 8 10 9 10


*/

/* output:

63


*/