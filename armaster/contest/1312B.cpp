#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>m;
vector<ll>v[110];
ll arr[110];

void reset(ll n)
{
    m.clear();
    for(ll i=0; i<=n; i++)
    {
        arr[i];
        v[i].clear();
    }
}

int main()
{
    ll t;

    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        reset(n);
        for(ll i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(m[(i-arr[i])])
            {
                ll idx=m[(i-arr[i])];
                m[(i-arr[i])]=0;
                //cout<<arr[idx]<<" first "<<arr[i]<<endl;
                swap(arr[idx],arr[i]);
                //cout<<arr[idx]<<" first "<<arr[i]<<endl;
            }
            else
            {
                m[(i-arr[i])]=i;
            }
        }

        ll ck=100;
        while(ck--)
        {
            ll ct=0;
            m.clear();
            for(ll i=1; i<=n; i++)
            {
                if(m[(i-arr[i])])
                {
                    ll idx=m[(i-arr[i])];
                    m[(i-arr[i])]=0;
                    //cout<<arr[idx]<<" second "<<arr[i]<<endl;
                    swap(arr[idx],arr[i]);
                    ct++;
                    //cout<<arr[idx]<<" second "<<arr[i]<<endl;
                }
                else
                {
                    m[(i-arr[i])]=i;
                }
            }
            if(ct==0)break;
        }
        for(ll i=1; i<=n; i++)
        {
            cout<<arr[i];
            if(i==(n))
            {
                cout<<endl;
            }
            else
            {
                cout<<" ";
            }
        }

    }
    return 0;
}