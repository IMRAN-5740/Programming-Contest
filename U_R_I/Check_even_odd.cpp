#include<bits/stdc++.h>
const int n=(int)1e5+5;
int arr[n];
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	puts("\n");
	for (int i=0;i<=n;i+=2){
		arr[i]=1;
	}

	int k;
	//cin>>k;
	while (scanf("%d",&k)!=EOF){

	if (arr[k]){
		cout<<"this is an even number"<<endl;
	}
	else
		cout<<"this is an odd number"<<endl;
}
	return 0;
}