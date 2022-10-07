#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>vc(n);
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
		}
		ll cnt=0;
		ll pos=0;
		for(ll i=0;i<n;i++)
		{
			if(vc[i]==0)
			{
				pos++;
			}

			if(pos!=vc.size())
			{
				
				if(vc[i]<vc[i+1] )
				{
					vc[i]=min(vc[i],vc[i+1]);
					vc[i+1]=min(vc[i],vc[i+1]);
					cnt++;
				}
				else if(vc[i]==vc[i+1])
				{
					vc[i]=0;
					cnt++;
				}
			}
			else
			{
				//cout<<cnt<<endl;
				//cnt=0;
				
				break;
			}
			
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}