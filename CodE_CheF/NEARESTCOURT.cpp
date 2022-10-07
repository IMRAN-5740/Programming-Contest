#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll mid=(x+y)/2;
		ll res=max(abs(mid-x),abs(mid-y));
		cout<<res<<endl;
	}
	return 0;
}