#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()

{ 	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>vc;
		
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);

		}
		ll mn=vc[0];
		ll sum=0;
		for(ll i=1;i<vc.size();i++)
		{
			mn=min(mn,vc[i]);
		}
		for(ll i=0;i<vc.size();i++)
		{
			sum=sum+(vc[i]-mn);
		}
		cout<<sum<<endl;

	}
	return 0;
}