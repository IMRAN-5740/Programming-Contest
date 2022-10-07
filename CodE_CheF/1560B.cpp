#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll dif=abs(a-b);
		ll val=max(a,max(b,c));
		if((2*dif)<val)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(c<=dif)
			{
				cout<<(c+dif)<<endl;
			}
			else
			{
				cout<<(c-dif)<<endl;
			}
		}
	}
	return 0;
}