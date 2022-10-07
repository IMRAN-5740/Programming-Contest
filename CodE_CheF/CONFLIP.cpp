#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll g;
		cin>>g;
		while(g--)
		{
			ll i,n,q;
			cin>>i>>n>>q;
			if(n%2==0)
			{
				cout<<(n/2)<<endl; 
			}
			else if(i==q)
			{
				cout<<((n-1)/2)<<endl;
			}
			else
			{
				cout<<((n+1)/2)<<endl;
			}
		}
		
	}
	return 0;
}