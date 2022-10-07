#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,k;cin>>n>>k;
		if(n&1)
		{
			ll x=(n-1)/2;
			cout<<1<<" "<<x<<" "<<x<<endl;
		}
		else
		{
			ll p=n/2;
			if(p&1)
			{
				ll x=(n-2)/2;
				cout<<2<<" "<<x<<" "<<x<<endl;
			}
			else
			{
				cout<<(n/2)<<" "<<(n/4)<<" "<<(n/4)<<endl;
			}
			
		}
	}
	return 0;
}