#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,d;
		cin>>n>>d;
		ll i=1;
		ll res=1;
		for(int i=1;i<=d and res<n;i++)
		{
			if(i<=10)
			{
				res=res*2;
			}
			else
			{
				res=res*3;
			}
			
		}
		if(res>=n)
		{
			res=n;
			
		}
		cout<<res<<endl;
	}
	return 0;
}