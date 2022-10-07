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
		cin>>n;
		if(n==1)cout<<2<<endl;
		else
		{
				if(n%3==0)cout<<(n/3)<<endl;
				
				else
				{
					cout<<((n/3)+1)<<endl;
				}			
		}
	}
	return 0;
}