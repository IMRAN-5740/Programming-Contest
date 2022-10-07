#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,r,b;
		cin>>n>>r>>b;
		ll r_pos1=(r/(b+1));
		ll y=r%(b+1);
		while(b--)
		{ 
			ll r_pos=r_pos1;
			if(y!=0)
			{
				r_pos++;
				y--;
			}
				for(ll i=0;i<r_pos;i++)
				{
					cout<<"R";
				}
				
			
			cout<<"B";
		}
		ll cnt=0;
		if(y!=0) r_pos1++;
		for(ll i=0;i<r_pos1;i++)
		{
			cout<<"R";
		}
		cout<<endl;
	}
	return 0;
}