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
		set<ll>st;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
			st.insert(x);

		}
		// if(st.size()==n)cout<<(n-1)<<endl;
		// else if(st.size()==1)cout<<0<<endl;
		// else cout<<(n-st.size())<<endl;
		ll mx_cnt=0;
		map<ll,ll>mp;
		for(auto i:vc)
		{
			mp[i]++;
			mx_cnt=max(mx_cnt,mp[i]);
		}
		cout<<(n-mx_cnt)<<endl;
	}
	return 0;
}