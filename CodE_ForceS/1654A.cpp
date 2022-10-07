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
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		sort(arr+1,arr+1+n);
		cout<<(arr[n]+arr[n-1])<<endl;
	}
	return 0;
}