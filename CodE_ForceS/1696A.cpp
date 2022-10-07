#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,z;
		cin>>n>>z;
		ll arr[n+1];
		ll brr[n+1];
		ll mx=0;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			arr[i]=x;
			if(arr[i]>mx)
				{mx=arr[i];}
			ll temp=arr[i]|z; 
			brr[i]=temp;
		}
		ll mn=mx;
		
			for(ll i=0;i<n;i++)
			{
				if(brr[i]>mn)
				{
					mn=brr[i];
				}
			}
		cout<<mn<<endl;
		mx=0;
	}
	return 0;
}