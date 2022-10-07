#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		if(n==1)cout<<1<<endl;
		else if(n==4)cout<<2<<" "<<4<<" "<<1<<" "<< 3<<endl;
		else if(n==2 || n==3)cout<<"NO SOLUTION"<<endl;
		else
		{
			if(n&1)
			{
				ll val=n/2;
				ll m=val;
				for(ll i=n,j=val;i>m ,j>=1;i--,j--)
				{
					cout<<i<<" "<<j<<" "; 
				}
				cout<<val+1<<endl;
				
			}
			else
			{
				ll val=n/2;
				ll m=val;
				for(ll i=n,j=val;i>m ,j>=1;i--,j--)
				{
					cout<<i<<" "<<j<<" "; 
				}
				cout<<endl;
			}
		}	
	}
	return 0;
}