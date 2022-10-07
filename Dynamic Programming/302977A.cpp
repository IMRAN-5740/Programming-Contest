#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll arr[n+2];
		arr[1]=0;
		arr[0]=1;
		for(ll i=2;i<=n;i++)
		{
			arr[i]=2*(arr[i-2]);
		}	
		cout<<arr[n]<<endl;	
	}
	return 0;
}