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
		ll ar[n+1];
		ll res=0;
		ll c=0;
		for(ll i=0;i<n;i++)
		{
			ll x;cin>>x;
			ar[i]=x;
		}		
		for(ll i=0;i<n;i++)
		{
			if(ar[i]==0)c=0;
			else c++;
			res+=c;
		}
		cout<<res<<endl;
	}
	return 0;
}