#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int Bigmod(ll base,ll power,ll mod)
{
	if(power==0)
	{
		return 1;
	}
	else if(power%2==0)
	{
		ll a=Bigmod(base,power/2,mod);
		return (a*a)%mod;

	}
	else 
	{
		ll a=base%mod;

		ll b= Bigmod(base,power-1,mod);
		return (a*b)%mod;
	}
}

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
			ll b,p,m;	
			while(cin>>b>>p>>m)
			{
				ll ans=Bigmod(b,p,m)%m;
				cout<<ans<<endl;
			}
			


	}
	return 0;
}