#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll arr[n];
		ll sum=x;
		ll ans=x;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}
	return 0;
}
