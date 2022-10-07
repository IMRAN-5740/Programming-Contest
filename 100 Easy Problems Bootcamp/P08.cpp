#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n,L,a;	cin>>n>>L>>a;
		vector<ll>t(n),l(n);
		
		for(ll i=0;i<n;i++)
		{
			cin>>t[i]>>l[i];
		}
		ll ans=0;
		if(n==0)
		{
			ans=L/a;
			cout<<ans<<endl;
			return 0;
		}		
		
		ans+=(t[0]/a);
		for(ll i=0;i<n-1;i++)
		{
			ll gap=t[i+1]-(t[i]+l[i]);
			ans+=gap/a;
		}
		ans+=(L-(t[n-1]+l[n-1]))/a;
		cout<<ans<<endl;
	}
	return 0;
}