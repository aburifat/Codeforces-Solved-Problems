#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ct=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                ct++;
            }else if(n%3==0){
                n=(n/3)*2;
                ct++;
            }else if(n%5==0){
                n=(n/5)*4;
                ct++;
            }
            else{
                ct=-1;
                break;
            }
        }
        cout<<ct<<endl;
        ct=0;
    }
    return 0;

}