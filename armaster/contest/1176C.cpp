
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    map<long long, long long>m,valid;
    long long v[]={4,8,15,16,23,42};
    for(int i=0; i<6;i++){
        valid[v[i]]++;
    }
    long long del=0;
    while(n--){
        long long tmp,index;
        cin>>tmp;
        if(valid[tmp]){
                for(int i=0; i<6;i++){
                    if(tmp==v[i]){
                        index=i;
                        break;
                    }
                }
                if(index==0){
                    m[tmp]++;
                }
                else if(m[v[index-1]]>m[v[index]]){
                    m[tmp]++;
                }

                else{
                    del++;
                }

        }else{
            del++;
        }
    }
    long long minn=min(min(min(min(min(m[4],m[8]),m[15]),m[16]),m[23]),m[42]);
                m[4]-=minn;
                m[8]-=minn;
                m[15]-=minn;
                m[16]-=minn;
                m[23]-=minn;
                m[42]-=minn;
                long long ext=m[4]+m[8]+m[15]+m[16]+m[23]+m[42];
                del+=ext;
                cout<<del<<endl;
    return 0;

}