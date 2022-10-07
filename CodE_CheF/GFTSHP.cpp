#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll  n,k;
		cin>>n>>k;
		ll arr[n+1];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll sum=0;
		
		ll j=0;
		ll ans=0;
		while(j<n and sum+arr[j]<=k)
		{
			ans++;
			sum+=arr[j];
			j++;
		}
		if(j<n and sum+(arr[j]+1)/2 <=k)
		{
			ans++;
		}
		cout<<ans<<endl;


		// ll cnt=0;
		// ll pos=0;
		// ll PreSum[n+1];
		// PreSum[1]=arr[1];
		// for(ll i=2;i<=n;i++)
		// {
		// 	PreSum[i]=PreSum[i-1]+arr[i];
		// }
		// if(PreSum[n]<=k)
		// {
		// 	cout<<n<<endl;
		// }
		// else if (PreSum[n]>k)
		// {
			
		// 	for(ll i=1;i<=n;i++)
		// 	{
		// 		if(PreSum[i]>k)
		// 		{
		// 			pos=i;
		// 			break;
		// 		}
		// 	}
		// 	cout<<pos<<endl;
		// }
		// cnt=0;
		// pos=0;

	}
	return 0;
}