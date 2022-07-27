

/***********************بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم************************************/

#include<bits/stdc++.h>
using namespace std;

/******** A.R.M.Al.Hasib - elvengard *************/

#define     ins              insert
#define     pub              push_back
#define     pob              pop_back
#define     ll               long long int
#define     ull              unsigned long long int
#define     max3(a,b,c)      max(a,max(b,c))
#define     max4(a,b,c,d)    max(max3(a,b,c),d)
#define     min3(a,b,c)      min(a,min(b,c))
#define     min4(a,b,c,d)    min(a,min3(b,c,d))
#define     MOD              1000000007
#define     MAX              1000000000000014
#define     MIN              -100000000000014
#define     EPS              1e-8
#define     PI               (2*acos(0.0))
#define     all(v)           v.begin(),v.end()
#define     mii              map<int,int>
#define     mll              map<ll,ll>
#define     pii              pair<int,int>
#define     pll              pair<ll,ll>
#define     mpii             map<pii,int>
#define     mpll             map<pll,ll>
#define     vi               vector<int>
#define     vl               vector<ll>
#define     vpi              vector<pii>
#define     vpl              vector<pll>
#define     vppl              vector<pair<ll,pll> >
#define     si               set<int>
#define     sl               set<ll>
#define     siit             set<int>::iterator
#define     slit             set<long long>::iterator
#define     msi              multiset<int>
#define     msl              multiset<ll>
#define     msiit            multiset<int>::iterator
#define     mslit            multiset<long long>::iterator
#define     frsit(it,myset)  for (it=myset.begin(); it!=myset.end(); ++it)
///                          use *it as the loop variable for set iteration..
#define     fast             ios_base::sync_with_stdio(0);cin.tie(0)
#define     F                first
#define     S                second
#define     mem(a,v)         memset(a,v,sizeof(a))
#define     mp               make_pair
#define     sq(x)           (x)*(x)
#define     dis(x1, y1, x2, y2) sqrt(sq(x1-x2)+sq(y1-y2))
#define     foi              freopen("input.txt","r",stdin);
#define     foo              freopen("output.txt","w",stdout);
#define     check            printf("check")
#define     nl               printf("\n")
#define     left(x)          ((x) << 1)
#define     right(x)         (((x) << 1) + 1)
#define     dbg(x)           cout << #x << " = " << x << endl
#define     gcd(a,b)         __gcd(a,b)
#define     lcm(a,b)         (a/gcd(a,b))*b
#define     fri(i,n)         for(int i=0;i<n;i++)
#define     frl(i,n)         for(ll i=0;i<n;i++)
#define     frir(i,n)        for(int i=n-1;i>=0;i++)
#define     frlr(i,n)        for(ll i=n-1;i>=0;i++)
#define     wh(n)            while(n--)
#define     fxd(i,x)         std::fixed <<std::setprecision(i)<<(x)
#define     onesi(n)         __builtin_popcount(n)
#define     onesll(n)        __builtin_popcountll(n)

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

#define bug printf("debug\n");
#define br puts("");

template<typename t>
t abs(t a)
{
    if(a>=0)
        return a;
    return -a;
}
template<typename t>
t dgtsum(t n){
    return n? dgtsum(n/10) + n%10 : 0;
}

/************************ End *************************/



int main(){
    fast;
    ll n,m,i;
    cin>>n>>m;
    ll arr[n+1]={};
    ll mark[n+1]={};
    vppl v;

    frl(i, m){
        ll a, b,c;
        cin>>a>>b>>c;
        v.pub(mp(a,mp(b,c)));
    }
    sort(all(v));
    mark[1]=1;
    ll res=0;
    frl(i, m){
        if(v[i].F==1){
            ll l=v[i].S.F;
            ll r=v[i].S.S;

            for(int j=l+1;j<=r; j++){
                    if(mark[j]==0){
                        arr[j]=res;
                        mark[j]=1;
                        res=arr[j];
                    }
            }
        }
    }
    for(ll i=1; i<=n; i++){
        if(mark[i]==0){
            arr[i]=arr[i-1];
        }
    }
    frl(i,m){
        if(v[i].F==0){
            ll l=v[i].S.F;
            ll r=v[i].S.S;
            ll ck=0;
            for(ll j=l+1;j<=r; j++){
                    if(mark[j]==0){
                        arr[j]=arr[j-1]-1;
                        mark[j]=-1;
                        ck=1;
                        break;
                    }else if(mark[j]==-1){
                        ck=1;
                        break;
                    }
            }
            if(ck==0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(ll i=1; i<=n; i++){
        cout<<arr[i]+n<<" ";
    }
    nl;
    return 0;
}

/**************************الحمد لله************************************/

/**A.R.M. AL HASIB**/
/**Computer Science & Engineering**/
/**University of Barisal, Bangladesh**/