#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,x,a,b;cin>>n>>x>>a>>b;
		ll res=abs(b-a);
		if(res+x>n-1)
		{
			cout<<n-1<<endl;
		}
		else
		{
			cout<<res+x<<endl;
		}
	}
	return 0;
}