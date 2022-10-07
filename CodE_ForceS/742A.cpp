#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll  Power(ll base, ll pow , ll mod)
{
	ll res=1;
	while(pow)
	{
		if(pow%2==1)
		{
			res=(res*base)%mod;
			pow--;
		}
		else
		{
			base=(base*base)%mod;
			pow=pow/2;
		}
	}
	return res;
}

int main()
{
	ll m;
	cin>>m;
	ll ans= Power(8,m,10);
	cout<<ans<<endl;
	return 0;
}