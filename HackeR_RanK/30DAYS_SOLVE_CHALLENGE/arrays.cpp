#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n+1];
	for(int i=1;i<=n;i++){
		cin>>array[i];
	}
	for(int j=n;j>=1;j--){
		cout<<array[j]<<" ";
	}
	return 0;
}