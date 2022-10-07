#include<bits/stdc++.h>
#define ll long long
const int N =1e5;
ll arr[N];
ll PreSum[N];
ll PreSumR[N];
ll mp[N];
ll ans=0;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;	
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		PreSum[0]=0;
		PreSumR[0]=0;
		for(ll i=1;i<=n;i++)
		{
			PreSum[i]=PreSum[i-1]+arr[i];
			PreSumR[i]=PreSumR[i-1]+arr[i];
		}
		ll sum=PreSum[n];
		// for(ll i=1;i<=n;i++)
		// {
		// 	cout<<PreSum[i]<<" ";
		// }
		//cout<<endl;
		//cout<<sum<<endl;
		for(ll i=1;i<=n;i++)
		{
			PreSumR[i]=abs(sum-PreSum[i]);
		}
		for(ll i=1;i<=n;i++)
		{
			ll dis=abs(PreSum[i]-PreSumR[i]);
			mp[i]=dis;
		}
		// for(ll i=1;i<=n;i++)
		// {
		// 		cout<<mp[i]<<" ";
		// }
		//cout<<endl;
		ll res=mp[1];
		for(ll i=2;i<=n;i++)
		{
			res=min(res,mp[i]);
		}
		for(ll i=1;i<=n;i++)
		{
			if(res==mp[i])
			{
				ans=i;
				break;
			}
		}
		cout<<max(PreSum[ans],PreSumR[ans])<<endl;
	}
	return 0;
}