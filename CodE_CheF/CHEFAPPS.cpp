#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll s,x,y,z;
		cin>>s>>x>>y>>z;
		ll cnt=0;
		ll sum=x+y;
		ll ans=0;
		if((s-sum)>=z)cout<<0<<endl;
		else if((s-sum)<z)
		{
			ll mn=min(x,y);
			ll mx=max(x,y);
			ans=s-mn;
			if(ans>=z)cout<<1<<endl;
			else cout<<2<<endl;
		}
	}
	return 0;
}