#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b,n;cin>>a>>b>>n;
		if(a%b==0)
			{
				cout<<-1<<endl;
				continue;
			}

			ll tem=n;
			if(tem%a!=0)
			{
				tem=n+a-(tem%a);

			}
			while(!(tem%a==0 and tem%b!=0))
			{
				tem=tem+a;
			}
			cout<<tem<<endl;
	}
	return 0;
}
