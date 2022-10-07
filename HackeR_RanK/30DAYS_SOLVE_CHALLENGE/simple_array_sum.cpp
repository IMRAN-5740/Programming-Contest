//.............Mohammad Imran............//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n+1];
	for(int i=1;i<=n;i++){
		cin>>array[i];
	}
	int sum=0;
	for(int j=1;j<=n;j++){
		sum+=array[j];
	}
	cout<<sum<<endl;
	return 0;
}