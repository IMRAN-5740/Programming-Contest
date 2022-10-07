#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1,ans=0;
	cin>>t;
	while(t--)
	{
		ll n;
		string s;
		cin>>n>>s;
		while(n--)
		{
			string mu;
			cin>>mu;
			if(mu=="CONTEST_WON")
			{
				int val;
				cin>>val;
				if(val>20)
				{
					ans=ans+300;
				}
				else if(val<=20)
				{
					ans=ans+300+(20-val);
				}
			}
			else if(mu=="TOP_CONTRIBUTOR")
			{
				ans=ans+300;
			}
			else if(mu=="BUG_FOUND")
			{
				ll pp;
				cin>>pp;
				ans=ans+pp;
			}
			else if(mu=="CONTEST_HOSTED")
			{
				ans=ans+50;
			}

		}
		if(s=="INDIAN")
		{
			cout<<(ans/200)<<endl;
			ans=0;
		}
		else if(s=="NON_INDIAN")
		{
			cout<<(ans/400)<<endl;
			ans=0;
		}
	}
	return 0;
}