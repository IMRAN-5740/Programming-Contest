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
		ll arr[n+1];
		ll brr[n+1];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(ll j=0;j<n;j++)
		{
			cin>>brr[j];
		}
		//sort(arr,arr+n);
		//sort(brr,brr+n);
		for(ll i=0;i<n;i++)
		{
			if(arr[i]>brr[i])
			{
				swap(arr[i],brr[i]);
			}
		}
		ll sumA=0;
		ll sumB=0;
		for(ll i=0;i<n-1;i++)
		{
			sumA=sumA+abs(arr[i]-arr[i+1]);
		}
		for(ll i=0;i<n-1;i++)
		{
			sumB=sumB+abs(brr[i]-brr[i+1]);
		}
		ll res=sumA+sumB;
		cout<<res<<endl;
	}
	return 0;
}