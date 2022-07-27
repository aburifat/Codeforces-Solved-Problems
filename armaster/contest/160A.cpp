#include<cstdio>
using namespace std;

int main(){
    int n, sum=0, mi, sum2=0;
    scanf("%d",&n);
    int i, arr[110]={0};
    int val[110]={0} ,ans[110]={0};
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        val[arr[i]]++;
    }
    for(i=1;i<100;i++){
        val[i+1]=val[i+1]+val[i];
    }
    for(i=0;i<n;i++){
        ans[val[arr[i]]-1]=arr[i];
        val[arr[i]]--;
    }
    for(i=0; i<n; i++){
        sum+=ans[i];
    }
    mi=sum/2;
    int k=0;
    for(i=n-1;i>=0;i--){
        sum2+=ans[i];
        k++;
        if(sum2>mi){
            break;
        }
    }
    printf("%d",k);
    return 0;
}