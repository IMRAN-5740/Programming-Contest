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
		ll arr[n+1];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n%2!=1)
		{
			ll mn=INT_MAX;
			ll cnt=0;
			for(ll i=0;i<n;i++)
			{
				if(arr[i]<mn)
				{
					mn=arr[i];
					cnt=i;
				}
			}
			if(cnt%2!=0)cout<<"Mike"<<endl;
			else cout<<"Joe"<<endl;
		}
		else cout<<"Mike"<<endl;

	}
	return 0;
}