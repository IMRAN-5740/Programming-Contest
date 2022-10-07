#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int i,j;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n+1][n+1];
		int dp[n+1][n+1];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(i=1;i<=n;i++)
		{
			dp[n][i]=arr[n][i];
		}
		for(i=n-1;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				dp[i][j]=arr[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
			}
		}
		cout<<dp[1][1]<<endl;


	}

	return 0;
}