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
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		ll m;
		cin>>m;
		ll brr[m+1];
		for(ll j=1;j<=m;j++)
		{
			cin>>brr[j];
		}

		ll sum=1,pos=0,res=0,ans=0;
		for(ll i=1;i<=m;i++)
		{
			sum+=brr[i];
			pos=sum%n;
			if(pos==0)
			{
				pos=n;
				
			}
		}
		cout<<arr[pos]<<endl;
	}
	return 0;
}