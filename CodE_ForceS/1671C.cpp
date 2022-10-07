#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
	ll n,x;cin>>n>>x;
	ll arr[n+5],psum[n+5];
	for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];
	}		
	sort(arr+1,arr+n+1);
	psum[0]=0;
	ll sum=0;
		for(ll i=1;i<=n;i++)
		{
			psum[i]=psum[i-1]+arr[i];
		}
		
		for(ll i=1;i<=n;i++)
		{
			if(psum[i]>x)break;

			ll def=x-psum[i];
			ll y=(def/i)+1;
			sum=sum+y;
		}
		cout<<sum<<endl;
	}
	return 0;
}