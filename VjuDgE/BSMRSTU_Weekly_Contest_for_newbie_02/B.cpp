#include<bits/stdc++.h>
#define ll long long int
#define dld double
using namespace std;

int main()
{
	ll n;
	cin>>n;
	dld arr[n+1];
	dld brr[n+1];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i]>>brr[i];
	}
	dld mx=0; 
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			dld res=arr[i]-arr[j];
			res=res*res;
			dld res1=brr[i]-brr[j];
			res1=res1*res1;
			dld ans=res1+res;
			ans=sqrt(ans);
			mx=max(mx,ans);
			//cout<<ans<<endl;

		}
	}
	//cout<<mx<<endl;
	printf("%.10lf\n",mx);

	return 0;
}
