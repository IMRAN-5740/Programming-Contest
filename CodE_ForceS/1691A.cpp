#include<bits/stdc++.h>
#define ll long long int 
using namespace std ;
int main()

{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> vc;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
		}
		ll e=0,o=0;
		for(ll i=0;i<n;i++)
		{
			if(vc[i]%2==0)
				e++;
			else
				o++;
		}
cout<<min(e,o)<<endl;
		
	}
	return 0;
}