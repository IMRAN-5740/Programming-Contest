#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n+1];
		ll so=0,mo=0,s=0;
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		//sort(arr+1,arr+1+n);
		if(n==2)
		{
			ll sum=arr[1]+arr[2];
			cout<<sum<<endl;
		}
		else if(n>2)
		{
			so=arr[1]+arr[n];
			for(ll i=1;i<n;i++)
			{
				s=arr[i]+arr[i+1];
				if(mo<s)
				{
					mo=s;
				}
			}
			if(so>=mo)
			{
				cout<<so<<endl;
			}
			else
				cout<<mo<<endl;

		}

	}
	return 0;
}