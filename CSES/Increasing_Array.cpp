#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll arr[n+1];	
		for(ll i=1;i<=n;i++)
		{
			ll x;cin>>x;
			arr[i]=x;
		}	
		ll ans=0;
		for(ll i=2;i<=n;i++)

		{
			if(arr[i-1]>arr[i])
			{
				ans=ans+(arr[i-1]-arr[i]);
				arr[i]=arr[i-1];
			}

		}
		cout<<ans<<endl;
	//	ll tem=0;
		// ll cnt=0;
		// for(ll  i=1;i<=n-1;i++)
		// {
		// 	for(ll j=1;j<=n-i-1;j++)
		// 	{
		// 		if(arr[j]>arr[j+1])
		// 		{
		// 			swap(arr[j],arr[j+1]);
		// 			cnt++;
		// 		}
		// 	}
		// }
		// cout<<cnt+1<<endl;
		// // for(ll i=1;i<=n;i++)
		// // {
		// // 	cout<<arr[i]<<" ";
		// // }
		// // cout<<endl;
	}
	return 0;
}