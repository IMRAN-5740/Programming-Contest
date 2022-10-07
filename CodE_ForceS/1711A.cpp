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
		ll arr[n+6];
		for(ll i=1;i<=n;i++)
		{
			
			arr[i]=i;
		}	
		cout<<arr[n]<<" ";
		for(ll i=1;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}