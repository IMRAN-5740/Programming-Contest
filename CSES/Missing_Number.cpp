#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		ll 		n;cin>>n;
		ll arr[n+1];
		ll brr[n+1];
		for(ll i=1;i<n;i++)
		{
			ll x;cin>>x;
			arr[i]=x;
		}
		for(ll i=1;i<=n;i++)
		{
			brr[i]=i;
		}
		sort(brr+1,brr+n+1);
		sort(arr+1,arr+n);
		ll ans=0;
		for(ll i=1;i<=n;i++)
		{
			if(brr[i]!=arr[i])
			{
				ans=brr[i];
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}