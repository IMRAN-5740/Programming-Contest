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
		vector<ll>vc;
		map<ll,ll>mp;
		ll arr[n+1];
		for(ll i=0;i<n;i++)
		{
			// ll x;
			// cin>>x;
			cin>>arr[i];
			vc.push_back(arr[i]);
			mp[arr[i]]++;
		}
		//sort(vc.begin(),vc.end());
		//cout<<mp.size()<<endl;
		// for(auto it:mp)
		// {
		// 	cout<<it.second<<" ";
		// }
		// cout<<endl;
		ll extra=0;
		for(auto it: mp)
		{
			if(it.second>1)
			{
				extra+=(it.second-1);
			}
		}
		extra+=mp.size();
		
		//cout<<extra<<endl;
		// for(auto i: vc)
		// {
		// 	cout<<vc[i]<<" ";
		// }
		//cout<<endl;
		 vector<ll>v;
		// ll ans=0;
		 while(v.size()<n)
		 {
		 	v.push_back(extra);
		 	if(extra>mp.size())
		 	{
		 		extra--;
		 	}
		 }
		 reverse(v.begin(),v.end());
		 for(auto it: v)
		 {
		 	cout<<it<<" ";

		 }
		 cout<<endl;
	}

	return 0;
}