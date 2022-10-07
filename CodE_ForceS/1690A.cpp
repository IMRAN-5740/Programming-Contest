#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		ll a,b,c;
		cin>>n;
		if(n%3==0)
		{
			a=(n/3)+1;
			b=a-1;
			c=n-(a+b);
			cout<<b<<" "<<a<<" "<<c<<endl;
		}
		else if(n%3!=0 and n>7)
		{
			a=(n/3)+2;
			b=a-1;
			c=n-(a+b);
			cout<<b<<" "<<a<<" "<<c<<endl;
		}
		else if(n==7)
		{
			cout<<2<<" "<<4<<" "<<1<<endl;
		}

		
		
	}
	return 0;
}