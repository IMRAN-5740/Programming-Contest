#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		vector<ll>vc,vc1;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
			vc1.push_back(x);
		}		
		sort(vc1.begin(),vc1.end());
		
		if(n%2==0)
		{
			for(ll i=0;i<n;i+=2)
			{
				if(vc[i]>vc[i+1])
				{
					swap(vc[i],vc[i+1]);
				}
			}
		}
		else
		{
			for(ll i=1;i<n;i+=2)
			{
				if(vc[i]>vc[i+1])
				{
					swap(vc[i],vc[i+1]);
				}
			}
		}
		ll cnt=0;
		for(ll i=0;i<n;i++)
		{
			if(vc[i]!=vc1[i])
			{
				cnt=1;
				break;
			}
		}
		if(cnt==1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
	return 0;
}