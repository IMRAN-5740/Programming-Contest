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
		ll brr[n+1];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>brr[i];
		}
		ll cnt=0;
		label1:
		{
		for(ll i=0;i<n;i++)
		{
			if(arr[i]!=brr[i])
			{
				cnt=1;
				break;
			}
		}}
		if(cnt==0)
		{
			cout<<"YES"<<endl;

		}
		else
		{
			for(ll i=0;i<n;i++)
			{
				if(arr[i]==0)
				{
					continue;
				}
				arr[i]--;
			}
			goto label1;
		}
		cout<<"NO"<<endl;
	}
	return 0;
}