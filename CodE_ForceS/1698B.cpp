#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll>vc;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
		}
		ll cnt=0;
		for(ll i=1;i<n-1;i++)

		{
			if(vc[i]>(vc[i+1]+vc[i-1]))
			{
				cnt++;
			}
		}
		if(k==1)
		{
			cout<<((n-1)/2)<<endl;

		}
		else
			cout<<cnt<<endl;
	}
	return 0;
}