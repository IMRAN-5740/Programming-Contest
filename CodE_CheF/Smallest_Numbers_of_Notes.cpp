#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int array[]={100,50,10,5,2,1};
		int N,ans=0;
		cin>>N;
		for(int i=0;i<6;i++){
			ans=ans+(N/array[i]);
			N=N-array[i]*(N/array[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}