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
		for(ll i=1;i<=n;i++)
		{
			ll ans=((i*i)*(i*i-1))/2;
			ll res= 4*(i-1)*(i-2);
			cout<<ans-res<<endl;
		}		
	}
	return 0;
}