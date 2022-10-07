#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll sum=0;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			sum=sum+x;
		}
		if(sum>=m)
		{
			cout<<(sum-m)<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}