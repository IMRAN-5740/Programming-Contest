#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a=2,b=2;
		ll arr[3][3];
		for(ll i=1;i<=a;i++)
		{
			for(ll j=1;j<=b;j++)
			{
				cin>>arr[i][j];
			}
		}
		ll cnt=0;
		for(ll i=1;i<=a;i++)
		{
			for(ll j=1;j<=b;j++)
			{
				if(arr[i][j]==1)cnt++;
			}
		}	
		if(cnt==0)cout<<0<<endl;
		if(cnt==1)cout<<1<<endl;
		if(cnt==2)cout<<1<<endl;
		if(cnt==3)cout<<1<<endl;
		if(cnt==4)cout<<2<<endl;	
	}
	return 0;
}