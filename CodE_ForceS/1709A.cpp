#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll x;cin>>x;
		ll a,b,c;
		cin>>a>>b>>c;
		ll arr[4];
		arr[1]=a;
		arr[2]=b;
		arr[3]=c;
		if(arr[x]!=0)
		{
			ll val=arr[x];
			if(arr[val]!=0)
			{
				ll m=arr[val];
				if(arr[m]==0)
				{
					cout<<"YES"<<endl;
				}
			}
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;

	}
	return 0;
}