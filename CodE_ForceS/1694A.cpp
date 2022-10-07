#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
	ll a,b;
	cin>>a>>b;
	ll add=a+b;
	
	if(a<=b)
	{
		for(ll i=0;i<add;i++)
		{
			if(i%2==1 and a)
			{
				cout<<"0";
				a--;
			}
			else cout<<"1";
		}
	}
	else if(a>b)
	{
		for(ll i=0;i<add;i++)
		{
			if(i%2==1 and b)
			{
				cout<<"1";
				b--;
			}
			else cout<<"0";
		}
	}
	cout<<endl;
}
	
	return 0;
}