#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a==0 and b==0)
		{
			cout<<1<<endl;
		}
		else if(a==0 and b!=0)
		{
			cout<<1<<endl;
		}
		else if(a!=0 and b==0)
		{
			cout<<a+1<<endl;
		}
		else if(a!=0 and b!=0)
		{
			ll res=a+(b*2)+1;
			cout<<res<<endl;
		}
	}
	return 0;
}