#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll build[900005]={};
ll arr[900005]={};

ll buildTree(ll n, ll l, ll r, ll oppType)
{
    if(l==r){
        build[n]=arr[l];
        return build[n];
    }
    ll left=n*2;
    ll right=n*2+1;
    ll mid=(l+r)/2;
    ll p=buildTree(left,l,mid,!oppType);
    ll q=buildTree(right,mid+1,r,!oppType);
    if(oppType==0){
        build[n]=p^q;
    }
    else{
        build[n]=p|q;
    }
    return build[n];
}

ll query(ll n, ll l, ll r, ll oppType, ll ql, ll qr,ll val)
{
    if(qr<l|ql>r){
        return build[n];
    }
    if(ql<=l&&qr>=r){
            arr[ql]=val;
            build[n]=val;
        return build[n];
    }
    ll left=n*2;
    ll right=n*2+1;
    ll mid=(l+r)/2;
    ll p=query(left,l,mid,!oppType,ql,qr,val);
    ll q=query(right, mid+1, r, !oppType, ql, qr,val);
    if(oppType==0){
         build[n]=p^q;
    }else{
        build[n]=p|q;
    }
    return build[n];
}

int main()
{
    ll level,q;
    cin>>level>>q;
    ll n=(1<<level);
    ll x=(ll)(ceil(log2(n)));
    /// operation = 1(XOR) if Height of tree is
    /// even else it is 0(OR) for the root node
    ll oppType = (x % 2 == 0 ? 0 : 1);
    for(ll i=1; i<=n; i++){
        cin>>arr[i];
    }
    ll sg=buildTree(1,1,n,oppType);
    for(ll i=1; i<=q; i++){
        ll index,val;
        cin>>index>>val;
        //ll ut=updateTree(1,1,n,oppType,index,val);
        ll ans=query(1,1,n,oppType,index,index,val);
        cout<<ans<<endl;

    }
    return 0;
}