#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll res=(m*(m+1))/2;
		//cout<<res<<endl;
		ll sum=0;
		//cout<<sum<<endl;
		for( ll i=2;i<=n;i++)
		{
			sum+=m*i;
			//cout<<sum<<" ";
		}
		cout<<(sum+res)<<endl;
	}
	return 0;
}