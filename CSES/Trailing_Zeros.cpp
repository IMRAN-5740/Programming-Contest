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
		ll cnt=0;
		for(ll i=5;i<=n;i=i*5)
		{
			cnt+=(n/i); 
		
		}
		cout<<cnt<<endl;
	}
	return 0;
}