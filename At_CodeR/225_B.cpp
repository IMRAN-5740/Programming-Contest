#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		dp[u]++;
		dp[v]++;

	}
	int cnt=0;

// for(int i=1;i<=n;i++){
// 	cout<<dp[i]<<" ";
// }
// cout<<endl;
	for(int i=1;i<=n;i++){
		if(dp[i]==(n-1)){
			cnt++;
		}
	}
	if(cnt==1){
		cout<<"Yes"<<endl; 
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}