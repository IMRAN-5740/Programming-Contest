#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve()
{
	ll n,x,y;
	cin>>n>>x>>y;
	ll m=INT_MAX;
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=n;j++)
		{
			ll k=100*j+4*i;
			(k>=n)?m=min(m,i*y+j*x):0;
		}
	}
	cout<<m<<endl;
	return 0;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}

}