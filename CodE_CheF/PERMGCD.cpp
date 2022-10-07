#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,x;cin>>n>>x;
		if(x<n)cout<<-1<<endl;
		else
		{
			ll res=x+1-n;
			cout<<res<<" ";
			for(ll i=1;i<=n;i++)
			{
				if(i!=res)
					{
						cout<<i<<" ";
					}
			}
			cout<<endl;
		}		
	}
	return 0;
}