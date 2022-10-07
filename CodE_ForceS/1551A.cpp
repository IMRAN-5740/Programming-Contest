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
		//ll temp=n;
		ll res=n/3;
		ll res1=res+1;
		if(n%3==0)
		{
			cout<<n/3<<" "<<n/3<<endl;
		}
		else
		{
			if(((res*1)+(res1*2))==n)
			{
				cout<<res<<" "<<res1<<endl;
			}
			else if (((res*2)+(res1*1))==n)
			{
				cout<<res1<<" "<<res<<endl;
			}	
		}		
	}
	return 0;
}