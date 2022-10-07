#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int mn=0,mx=0;
		if(n&1)
		{
			cout<<-1<<endl;
		}
		else if(n<4)
		{
			cout<<-1<<endl;
		}
		else if (n==4)
		{
			cout<<1<<" "<<1<<endl;
		}
		else if(n==6)
		{
			cout<<1<<" "<<1<<endl;
		}
		else
		{
			if(n%4==0 and n%6==0)
			{
				cout<<(n/6)<<" "<<(n/4)<<endl;
			}
			else if(n%4!=0 and n%6!=0)
			{
				cout<<((n/6)+1)<<" "<<(n/4)<<endl;
			}
			else if(n%4==0 and n%6!=0)
			{
				cout<<((n/6)+1)<<" "<<(n/4)<<endl;
			}
			else if(n%4!=0 and n%6==0)
			{
				cout<<(n/6)<<" "<<(n/4)<<endl;
			}
			

		}
		
	}
	return 0;
}