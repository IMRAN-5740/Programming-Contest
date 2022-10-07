#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll arr[n+1];
		ll total=0;
		for(ll i=0;i<n;i++)
		{
			ll x;cin>>x;
			arr[i]=x;
			total+=x;
		}	
		ll ans=INT_MAX;	
		for(ll i=0;i<(1<<n);i++)
		{
			ll cnt=0;
			for(ll j=0;j<n;j++)
			{
				if((1<<j) & i)
				{
					cnt+=arr[j];
				//	cout<<arr[j]<<" ";
				}		
			}
			//cout<<endl;
			ans=min(ans,abs((total-cnt)-cnt));
		}
		cout<<ans<<endl;
	}
	return 0;
}