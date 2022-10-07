#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;	cin>>n>>m;
		vector<ll>vc;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
		}
		ll mn=INT_MAX;
		ll mx=INT_MIN;
		ll cnt=0;
		for(ll i=0;i<n;i++)
		{
			mn=min(mn,vc[i]);
			mx=max(mx,vc[i]);
			ll val=mx-mn;
			if(val>(2*m))
			{
				cnt++;
				mn=vc[i];
				mx=vc[i];
			}
		}	
		cout<<cnt<<endl;
		cnt=0;

	}
	return 0;
}