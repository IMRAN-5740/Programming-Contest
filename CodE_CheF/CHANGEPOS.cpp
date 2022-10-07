#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;cin>>a>>b>>c>>d;
		if((a==c )or (b==d))cout<<2<<endl;
		else cout<<1<<endl;
	}
	return 0;
}