
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
		cin>>n;
		vector<ll>vc(n,0);
		for(ll i=0;i<n;i++)
		{
			cin>>vc[i];

		}
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			sum+=vc[i];
			
		}
		sum=sum/(n+1);
		for( ll i=0;i<n;i++)
		{
			cout<<(vc[i]-sum)<<" ";
		}
		cout<<endl;
}

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}