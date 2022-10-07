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
		ll arr[n+1];
		set<ll>st;
		map<ll,ll>mp;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			st.insert(x);
			
			mp[x]++;
		}
		ll ans=0;
		ll even=0;
		for(auto it:mp)
		{
			if(it.second%2==1)
			{
				ans++;
			}
			else
			{
				even++;
			}
			
		}
		cout<<(ans+(even/2)*2)<<endl;
	}
	return 0;
}