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
		set<ll>st;
		map<ll,ll>mp;
		for(ll i=0;i<n;i++)
		{
			ll x;cin>>x;
			st.insert(x);
			mp[x]++;
		}	
		for(auto it =st.begin();it!=st.end();it++)
		{
			cout<<*it<<" ";
		}
		//cout<<endl;
		for(auto it :mp)
		{
			ll cnt=it.second;
			if(cnt>1)
			{
				while(cnt!=1)
				{
					cout<<it.first<<" ";
					cnt--;
				}
			}
		}
		st.clear();
		cout<<endl;
	}
	return 0;
}