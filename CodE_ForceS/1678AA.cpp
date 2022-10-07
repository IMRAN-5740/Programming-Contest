#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>vc;
int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		for(ll i=0;i<vc.size();i++)
		{
			vc.clear();
		}
		ll n;
		cin>>n;
		
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
		}
		ll cnt=0;
		bool flag;
		ll po=0;
		if()
		{
			for(ll i=0;i<vc.size()-1;i++)
			{
				if(vc[i]==vc[i+1])
				{cnt++;
					vc[i]=0;
					goto:2;
					
				}
				else if(vc[i]<vc[i+1])
				{cnt++;
					vc[i]=min(vc[i],vc[i+1]);
					vc[i+1]=min(vc[i],vc[i+1]);
					goto:2;
					
				}
			}
			for(ll i=0;i<vc.size();i++)
			{
				if(vc[i]==0)
				{
					po=1;
					break;
				}
				
					
			}
		}
		//if(po==1)
		{
			cout<<cnt<<endl;
		}
		
		
		
		cnt=0;
		
	}
	return 0;
}