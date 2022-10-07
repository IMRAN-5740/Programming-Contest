#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		set<ll>st;
		ll n;
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			ll x;cin>>x;
			st.insert(x);
		}		
		cout<<(ll)st.size()<<endl;
	}
	return 0;
}