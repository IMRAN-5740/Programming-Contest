#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll arr[n];
	if(n==2)
	{
		cout<<-1<<endl;
		return ;
	}
	if(n%2==1)
	{
		ll x=n;
		for(ll i=0;i<n;i++)
		{
			cout<<x<<" ";
			x--;
		}
		cout<<endl;
		return;
	}
	ll x=1;
	for(ll i=0;i<n;i++)
	{
		arr[i]=x;
		x++;
	}
	arr[0]=2;
	arr[1]=3;
	arr[2]=1;
	for(ll i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int  main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}