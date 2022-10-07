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
		ll p=0;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			p=p+arr[i];
		}
		if(p%2==0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}