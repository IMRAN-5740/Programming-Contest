#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	ll ans=0;
	while(t--)
	{
		ll n;
		cin>>n;
		while(n--)
		{
			ll s,p,v;
			cin>>s>>p>>v;
			s++;
			ll res=(p/s)*v;
			ans=max(ans,res);
			
		}
			cout<<ans<<endl;	
			ans=0;
	}
	return 0;
}