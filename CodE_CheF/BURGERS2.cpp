#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll x,y,n,r;cin>>x>>y>>n>>r;
		if((r/x)<n)
		{
			cout<<-1<<endl;
		}
		else if(r/y>=n)
			{
				cout<<0<<" "<<n<<endl;
			}
			else
			{
				ll res=(n*y); 
				ll ans=x-y; 
				ll pos=(r-res)/ans;
				if((r-res)%ans!=0)
				{
					pos++;
				}
				cout<<pos<<" "<<n-pos<<endl;
			}
			
				
	}
	return 0;
}