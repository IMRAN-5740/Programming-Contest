#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a=0,b=0;
		if(x%3==0)
		{
			a+=(x/3);
		}
		else if(x%3==1)
		{
			a+=(x/3)+1;
			b+=2;
		}
		else if (x%3==2)
		{
			a+=(x/3)+1;
			b++;
		}

		if(a+b<=n)
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<n-(a+b)<<endl;
			a=0;
			b=0;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		a=0;
		b=0;
		
	}
	return 0;
}