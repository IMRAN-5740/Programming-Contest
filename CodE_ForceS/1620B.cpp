#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll w,h;
		cin>>w>>h;
		
		ll mn=INT_MIN;
		for(ll i=0;i<4;i++)
		{
			ll n;
			cin>>n;
			ll cnt=0;
			for(ll j=0;j<n;j++)
			{
				ll x;
				cin>>x;
				if(j==0)
				{
					cnt=x;
				}
				else if(j==(n-1))
				{
					cnt=x-cnt;
				}
			}
			if(i<2)
			{
				cnt=cnt*h;
			}
			else
			{
				cnt=cnt*w;
			}
			mn=max(mn,cnt);
		}
		cout<<mn<<endl;
	}
	return 0;
}