#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		
		if(y%x==0)
		{
			cout<<(y/x)-1<<endl;
		}
		else
		{
			cout<<(y/x)<<endl;
		}
	}
	return 0;
}