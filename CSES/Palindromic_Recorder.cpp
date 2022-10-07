#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
	string s;cin>>s;
	map<char,ll>mp;
	
		for(ll i=0;i<(ll)s.size();i++)
		{
			mp[s[i]]++;
			//v[s[i]-"a"]++;
		}
		// for(auto it:mp)
		// {
		// 	cout<<it.first<<" :"<<it.second<<endl;
		// }
		ll len=(ll)s.size();
		ll cnt=0;
		vector<char>v1,v2;
		if(len%2==0)
		{
			for(auto it: mp)

			{
				if(it.second & 1)cnt++;
			}
			if(cnt!=0)
			{
				cout<<"NO SOLUTION"<<endl;
				
			}
			else
			{
				for(auto it: mp)/
				{
					ll val=it.second/2;
					while(val--)
					{
						v1.push_back(it.first);
					}
				}
				for(ll i=0;i<(ll)v1.size();i++)
				{
					cout<<v1[i];
				}
				for(ll i=(ll)v1.size()-1;i>=0;i--)
				{
					cout<<v1[i];
				}
				cout<<endl;
			}
			

		}
		else
		{
			for( auto it:mp)
			{
				if(it.second&1)cnt++;
			}
			if(cnt>1)
			{
				cout<<"NO SOLUTION"<<endl;
				
			}
			else
			{
				for(auto it: mp)
				{
					if(it.second%2==0)
					{
						ll val=it.second/2;
						while(val--)
						{
							v1.push_back(it.first);
						}
					}
					else
					{
						ll val=it.second;
						while(val--)
						{
							v2.push_back(it.first);
						}
					}
					
				}
				for(ll i=0;i<(ll)v1.size();i++)
				{
					cout<<v1[i];
				}
				for(ll i=0;i<(ll)v2.size();i++)
				{
					cout<<v2[i];
				}
				for(ll i=(ll)v1.size()-1;i>=0;i--)
				{
					cout<<v1[i];
				}
				cout<<endl;
			}
			
		}
		
	}
	return 0;
}