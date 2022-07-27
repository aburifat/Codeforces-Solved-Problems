#include<cstdio>
using namespace std;

int main()
{
    int a[110]={0},i=0;
    char c;
    while(scanf("%c",&c)){
            if(c=='\n'){
                break;
            }
        if(c!='+'){
            a[i]=c-'0';
            i++;
        }
    }
    int arr[4]={0};
    int ans[i];
    int j;
    for(j=0;j<i;j++){
        arr[a[j]]++;
    }
    for(j=1;j<3;j++){
        arr[j+1]=arr[j+1]+arr[j];
    }
    for(j=0;j<i;j++){
        ans[arr[a[j]]-1]=a[j];
        arr[a[j]]--;
    }
    for(j=0;j<i;j++){
        if(j!=0){
            printf("+");
        }
        printf("%d",ans[j]);
    }
    printf("\n");
    return 0;
}