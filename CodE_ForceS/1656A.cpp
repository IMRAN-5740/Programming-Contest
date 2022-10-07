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
			vector<pair<ll,ll>>vc;
			for(ll i=1;i<=n;i++)
			{
				ll x;
				cin>>x;
				vc.push_back({x,i});
			}
			sort(vc.begin(),vc.end());
			cout<<vc[0].second<<" "<<vc[n-1].second<<endl;		
	}
	return 0;
}