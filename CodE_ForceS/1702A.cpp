#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll val=1;
		ll ans=n-val;
		while(val<=n)
		{
			ans=min(ans,n-val);
			val=val*10;
		}		
		cout<<ans<<endl;
	}
	return 0;
}