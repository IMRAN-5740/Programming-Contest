#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll cnt=INT_MAX;
		if(b>a)cout<<1<<endl;
		else if(a==b)cout<<2<<endl;
		else
		{
			if(b==1)
			{
				for(ll i=1;i<=30;i++)
				{
					ll ct=0,d=a;
					while(d!=0)
					{
						d=d/(i+b);
						ct++;
					}
					cnt=min(cnt,i+ct);
				}
				cout<<cnt<<endl;
			}
			else
			{
				for(ll i=0;i<=30;i++)
				{
					ll ct=0,d=a;
					while(d!=0)
					{
						d=d/(i+b);
						ct++;
					}
					cnt=min(cnt,i+ct);
				}
				cout<<cnt<<endl;
			}
		}
	}
	return 0;
}