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
		ll arr[n+1];
		for(ll i=0;i<n;i++)
		{
			ll x;cin>>x;
			arr[i]=x;
		}
		ll cnt=0;
		if(arr[0]==1)cout<<"YES"<<endl;
		else
		{
			for( ll i=1;i<n;i++)
			{
				if(arr[i]%arr[0]!=0)
				{
					cout<<"NO"<<endl;
					cnt=1;break;
				}
			}
			if(cnt==0)cout<<"YES"<<endl;
		}
		
	}
	return 0;
}