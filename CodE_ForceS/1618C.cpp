#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n+10];
		ll gcd1=0;
		ll gcd2=0;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		for(ll i=0;i<n;i++)
		{
			
			if(i%2==0)
			{
				gcd1=__gcd(gcd1,arr[i]);
			}
			else
			{
				gcd2=__gcd(gcd2,arr[i]);
			}
		}

		ll cnt1=0;
		ll cnt2=0;
		for(ll i=0;i<n;i+=2)
		{
			if(arr[i]%gcd2==0)
			{
				cnt2=1;
				break;
			}
		}
		for(ll i=1;i<n;i+=2)
		{
			if(arr[i]%gcd1==0)
			{
				cnt1=1;
				break;
			}
		}
		if(cnt1==1 and cnt2==1)
		{
			cout<<0<<endl;
		}
		else if (cnt1==0)
		{
			cout<<gcd1<<endl;
		}
		else
		{
			cout<<gcd2<<endl;
		}
	}
	return 0;
}