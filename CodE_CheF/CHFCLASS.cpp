#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n<6)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<(n+1)/7<<endl;
		}
	}
	return 0;
}