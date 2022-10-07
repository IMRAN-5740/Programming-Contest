#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll cnt=1;
		vector<ll >vc;
		ll arr[n+5];
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			arr[i]=x;
		}	
		if(n==1)
		{
			cout<<1<<endl;
		}	
		else
		{
			//label1:
			for(ll i=2;i<=n;i++)
			{
				
				if(arr[1]<arr[i])
				{
					continue;
				}
				else if(arr[1]>=arr[i])
				{
					cnt++;
					arr[1]=arr[i];
					//goto label1;
				}
			}
			cout<<cnt<<endl;
			cnt=0;
		}
	}
	return 0;
}