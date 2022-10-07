#include <bits/stdc++.h>
#define ll long long 

using namespace std;
int main()
{
	ll n,x;
	cin>>n>>x;
	ll arr[n+1][n+1];
	// for(ll i=1;i<=n;i++)
	// {
	// 	for(ll j=1;j<=n;j++)
	// 	{
	// 		arr[i][j]=i*j;
	// 	}
	// }
	// int cnt=0;
	// for(ll i=1;i<=n;i++)
	// {
	// 	for(ll j=1;j<=n;j++)
	// 	{
	// 		if(arr[i][j]==x)
	// 		{
	// 			cnt++;
	// 		}
	// 	}
	// 	//cout<<endl;
	// }
	// cout<<cnt<<endl;
	int cnt=0;
	for(ll i=1;i<=n;i++)
	{
		if(x%i==0 and (x/i)<=n)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}