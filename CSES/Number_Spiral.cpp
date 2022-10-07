#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll r,c;cin>>r>>c;
		if(r==c)
		{
			ll res=((r-1)*(c-1)+(r));
			cout<<res<<endl;
		}
		else if(r>c)
		{
			if(r%2==0)
			{
				ll res=((r-1)*(r-1)+(r));
				ll dis=r-c;
				cout<<(res+dis)<<endl;
			}
			else
			{
				ll res=((r-1)*(r-1)+(r));
				ll dis=r-c;
				cout<<(res-dis)<<endl;
			}
		}
		else
		{
			if(c%2==0)
			{
				ll res=((c-1)*(c-1)+(c));
				ll dis=c-r;
				cout<<(res-dis)<<endl;
			}
			else
			{
				ll res=((c-1)*(c-1)+(c));
				ll dis=c-r;
				cout<<(res+dis)<<endl;
			}
		}
	}
	return 0;
}