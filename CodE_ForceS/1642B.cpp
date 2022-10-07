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
		map<ll,ll>mp;
		vector<ll>vc;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
			mp[x]++;
		}	
		//cout<<mp.size()<<endl;	
		//cout<<vc.size()<<endl;
		ll ext=0;
		for(auto i:mp)
		{
			if(i.second>1)
			{
				ext+=i.second-1;
			}
		}
		ext+=mp.size();
		//cout<<ext+(mp.size())<<endl;
		vector<ll >ans;
		while(ans.size()<n)
		{
			ans.push_back(ext);
			if(ext>mp.size())
			{
				ext--;
			}
		}
		reverse(ans.begin(),ans.end());
		for(auto it:ans)
		{
			cout<<it<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}