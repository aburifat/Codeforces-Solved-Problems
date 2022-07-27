#include<iostream>
#include<map>
using namespace std;
int main(){
	int arr[1005];
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		int tmp;
		cin>>tmp;
		arr[i]=tmp;	
	}
	for(int i=1; i<=n;i++){
		map<int,int>m;
		int stu=i;
		while(1){
			m[stu]++;
			if(m[stu]>1){
				cout<<stu<<" ";
				break;
			}
			stu=arr[stu];
		}
	}
	return 0;
}