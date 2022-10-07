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
		vector<ll>vc;
		ll arr[n+1];
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}		
		ll cnt=0;
		for(ll i=2;i<=n;i++)
		{
			ll rem=(i+i-1);
			if(arr[i]>rem)continue;
			ll x=rem%arr[i];
			x++;
			ll pos=i-x;
			while(pos>=1)
			{
				if(arr[i]*arr[pos]==(pos+i))
				{
					cnt++;	
				}
				pos=pos-arr[i];
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}