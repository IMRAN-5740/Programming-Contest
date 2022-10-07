#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t,i,j,f;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll arr[n+1];
		ll ans=0;
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		sort(arr+1,arr+n+1);
		ll dis=n-k;//8-2=6
		ll pos=2*k;
		ll mdis=dis-k;//6-2=4
		while(k--)
		{
			ans=ans+arr[dis]/arr[n];
			dis--;
			n--;
		}

		for(f=1;f<=dis;f++)
		{
			ans=ans+arr[f];
		}
		cout<<ans<<endl;
	}
	return 0;
}