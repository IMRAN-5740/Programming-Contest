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
		ll res=n/100;
		if(res>10)cout<<-1<<endl;
		else
		{
			ll rem=n%100;
			ll val=res+rem;
			if(val>10)cout<<-1<<endl;
			else
			cout<<(val)<<endl;	
		}
		
	}
	return 0;
}