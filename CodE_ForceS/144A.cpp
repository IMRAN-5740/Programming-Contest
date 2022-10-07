#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(){
	int n;
	cin>>n;
	int array[n];
	int max=0;
	int min=INT_MAX;
	int index1,index2;
	for(int i=0;i<n;i++){
		cin>>array[i];
		if(array[i]>max){
			max=array[i];
			index1=i;
		}
		if(array[i]<=min){
			min=array[i];
			index2=i;
		}
	}
	int sum=0;
	if(index1>index2){
		sum=sum+index1;
		sum=sum+n-index2-1;
		sum--;
	}
	else{
		sum=sum+index1;
		sum=sum+n-index2-1;
	}
	cout<<sum<<endl;
	return 0;
}
int main(){
	int t;
	//cin>>t;
	//while(t--){
		solve();
		//return 0;
	//}
}