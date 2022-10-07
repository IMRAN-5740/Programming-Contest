#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n+1];
	for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	ll mx=arr[1];
	for(ll i=2;i<=n;i++)
	{
		mx=max(mx,arr[i]);
	}
	ll mn=arr[1];
	for(ll i=2;i<=n;i++)
	{
		mn=min(mn,arr[i]);
	}
	sort(arr+1,arr+1+n);
	ll res=arr[n-1]-arr[1];
	ll res1=arr[n]-arr[2];

	cout<<min(res,res1)<<endl;
	return 0;
}