#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,cnt=0;
	cin>>n>>k;
	int array[n+1];
	for(int i=1;i<=n;i++){
		cin>>array[i];
		if(array[i]%k==0){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;

}