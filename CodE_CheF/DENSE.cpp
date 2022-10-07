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
		string s;
		cin>>s;
		vector<ll>bo(n,0);
		vector<ll>bc(n,0);
	
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='(')
			{
				bo[i]++;
			}
			if(i>0)
			{
				bo[i]=bo[i]+bo[i-1];
			}
		}
		ll res=n+1;
		for(ll i=n-1;i>=0;i--)
		{
			if(s[i]==')')
			{
				bc[i]++;
			}
			if(i<(n-1))
			{
				bc[i]=bc[i]+bc[i+1];
			}

			 res=min(res,n-2*min(bo[i],bc[i]));
			
		}cout<<res<<endl;

	}
	return 0;
}