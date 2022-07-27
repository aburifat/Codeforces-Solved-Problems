#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    double h, c, t;
    while(n--){
        ll ans=0;
        cin>>h>>c>>t;
        if(t<=((h+c)/2.0))cout<<"2\n";
        else{
            ll k=((h-t)/((2.0*t)-h-c));
            double ck1=abs(((double)k*(h+c)+h)-t*(2.0*(double)k+1.0))*(2.0*(double)k+3.0);
            double ck2=abs((((double)k+1)*(h+c)+h)-t*(2.0*(double)k+3.0))*(2.0*(double)k+1.0);
            if(ck1<=ck2){
                cout<<2*k+1<<"\n";
            }else{
                cout<<2*(k+1)+1<<endl;
            }
        }
    }
    return 0;
}

/*
3
30 10 20
41 15 30
18 13 18
output:
2
7
1
*/