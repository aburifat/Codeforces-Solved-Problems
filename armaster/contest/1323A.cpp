/*******Bismillahir-Rahmanir-Rahim**********/
/*
Name         : Abu Rifat Muhammed Al Hasib
Institution  : University of Barisal, Bangladesh
Github       : abu-rifat
Codeforces   : AbuRifatMuhammed
AtCoder      : aburifat
codechef     : aburifat
SPOJ         : abu_rifat
UvaOJ        : aburifat
DevSkill     : abu_rifat
lightoj      : Abu Rifat Muhammed Al Hasib
facebook     : https://www.facebook.com/a.r.m.al.hasib/
linkedin     : https://www.linkedin.com/in/abu-rifat-534258142/
Email        : rifat.cse4.bu@gmail.com, armalhasib@gmail.com
*/

/*
Contest         : Codeforces Round #626 (Div. 2)
Online Judge    : Codeforces
Solving Method  :
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 250009
#define pb push_back


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    //t=1;
    cin>>t;
    for(ll T=1;T<=t;T++)
    {
        ll n;
        ll arr[109];
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll ck=0;
        if(n==1&&arr[0]%2!=0){
            cout<<"-1"<<endl;
            continue;
        }
        for(ll i=0; i<n; i++)
        {
            if(arr[i]%2==0){
                cout<<"1"<<endl;
                cout<<(i+1)<<endl;
                ck=1;
                break;
            }
        }
        if(!ck){
            cout<<"2"<<endl;
            cout<<"1 2"<<endl;
        }

    }
    return 0;
}

/***********Alhamdulillah***********/