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
		if(x>y)
		{
			cout<<0<<" "<<0<<endl;
		}
		else if(x==y)
		{
			cout<<3<<" "<<1<<endl;
		}
		else if (y%x==0)
		{
			cout<<1<<" "<<(y/x)<<endl;
		}
		else
		{
			cout<<0<<" "<<0<<endl;
		}
	}
	return 0;
}