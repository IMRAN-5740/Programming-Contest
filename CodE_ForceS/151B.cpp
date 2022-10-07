#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		vector<ll>vc;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
		}
		sort(vc.begin(),vc.end());
		ll mns=INT_MAX;
		for(ll i=0;i<n-1;i++)
		{
			mns=min(mns,(vc[i+1]-vc[i]));
		}
		cout<<mns<<endl;
	}
	return 0;
}