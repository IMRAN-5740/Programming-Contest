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
	if(x>=y)
	{
		cout<<abs(x-y)<<endl;
	}		else
	cout<<0<<endl;
	}
	return 0;
}