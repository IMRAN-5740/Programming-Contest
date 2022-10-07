#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll x,y,z;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(b==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else if (b==2)
		{
			cout<<"YES"<<endl;
			if(a==1)
			{
				
				cout<<1<<" "<<3<<" "<<4<<endl;
			}
			else
			{
				z=a*(a*b);
				x=a;
				y=a*((a*b)-1);
				//cout<<"YES"<<endl;
				cout<<x<<" "<<y<<" "<<z<<endl;
			}
		}
		else
		{
			z=a*b;
			x=a;
			y=a*(b-1);
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
	}

	return 0;
}