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
		vector<ll>vc;
		map<ll,ll>mp;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
			mp[x]++;
		}
		sort(vc.begin(),vc.end());

		bool ok=false;
		for(ll i=0;i<n-2;i++)
		{
			ll sum=vc[i]+vc[i+1]+vc[i+2];
			if(!mp[sum])
			{
				ok=true;
				break;
			}
		}
		
		ll sum=vc[0]+vc[n-1]+vc[n-2];
		ll sum2=vc[0]+vc[1]+vc[n-1];
		if(!mp[sum] or !mp[sum2])
		{
			ok=true;
			
		}
		if(ok==true)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}