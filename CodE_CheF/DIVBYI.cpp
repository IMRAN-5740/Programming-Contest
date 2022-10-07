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
		for(ll i=1;i<=n;i++)
		{
			arr[i]=i;
		}
		if(n%2==1)
		{
			ll fst=(n/2)+1;
			ll val=(n/2)+1;
			cout<<fst<<" ";
			// for(ll i=n,j=1;j<fst,i>val;i--,j++)
			// {
			// 	cout<<j<<" "<<i<<" ";
			// }
			for(ll i=fst-1,j=fst+1;i>=1,j<=n;i--,j++)
			{
				cout<<i<<" "<<j<<" ";
			}
			cout<<endl;
		}
		else
		{
			ll fst=(n/2);
			ll val=(n/2)+1;
			//cout<<fst<<" ";
			// for(ll i=n,j=1;j<fst,i>val;i--,j++)
			// {
			// 	cout<<j<<" "<<i<<" ";
			// }
			for(ll i=fst,j=fst+1;i>=1,j<=n;i--,j++)
			{
				cout<<i<<" "<<j<<" ";
			}
			cout<<endl;
		}		
	}
	return 0;
}