#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll  Power(ll base, ll pow)
{
	ll res=1;
	while(pow)
	{
		if(pow%2==1)
		{
			res=res*base;
			pow--;
		}
		else
		{
			base=base*base;
			pow=pow/2;
		}
	}
	return res;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll ans= Power(n,m);
	cout<<ans<<endl;
	return 0;
}