#include <bits/stdc++.h>
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
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		sort(arr+1,arr+1+n);
		if(n==1)
		{
			if(arr[1]>1)
			{
				cout<<"NO"<<endl; 
			}
			else
				cout<<"YES"<<endl;
		}
		else
		{
			if((arr[n]-arr[n-1])>1)
			{
				cout<<"NO"<<endl;
			}
			else
				cout<<"YES"<<endl;
		}
	}
	return 0;
}