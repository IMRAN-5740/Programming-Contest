#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
#define mod 1000000007

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll ans=1;
		for(ll i=1;i<=n;i++)
		{
			ans=(ans*2)%mod;
		//s%mod;
		}
		cout<<ans<<endl;

	}
	return 0;
}