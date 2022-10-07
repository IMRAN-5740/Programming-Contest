#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		//ll b=1;
		// for(ll i=2;i<=n;i++)
		// {
		// 	if(i%2==0)
		// 	{
		// 		b=b^i;
		// 	}
		// 	else
		// 	{
		// 		b=b&i;
		// 	}
		// }
		// cout<<b<<endl;

			ll res=n/2;
			if(res%2==1)
			{
				cout<<3<<endl;
			}
			if(res%2==0)
			{
				if(n%2==0)
				{
					cout<<n+3<<endl;
				}
				else
				{
					cout<<n<<endl;
				}
			}
	}
	return 0;
}