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
		if(n==1)cout<<1<<endl;
		else
		{
			for(ll i=2;i<=n+1;i++)
			{
				cout<<i<<" ";
			}
			puts("");
		}		
	}
	return 0;
}