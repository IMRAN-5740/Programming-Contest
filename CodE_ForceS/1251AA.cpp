#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		//sort(s.begin(),s.end());
		// map<char,ll>mp;
		// for(ll i=0;i<s.size();i++)
		// {
		// 	mp[s[i]]++;
		// }
		// for(auto it:mp)
		// {
		// 	if(it.second%2==0)
		// 	{
		// 		for(ll i=0;i<s.size()-1;i++)
		// 		{
		// 			if(s[i]==it.first and s[i+1]!=it.first)
		// 			{
		// 				cout<<it.first;
		// 				i++;
						
		// 			}
		// 			else i++;
					
		// 		}			
		// 	}

		// 	else
		// 	{
		// 		ll val=it.second%2;
		// 		for(ll i=0;i<val;i++)
		// 		{
		// 			cout<<it.first;
		// 		}
		// 	}

		// }
		// cout<<endl;
		set<char>st;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]==s[i+1])
			{
				i++;
			}
			else 
			{
				st.insert(s[i]);
			}
		}
		for(auto it :st)
		{
			cout<<it;
		}
		cout<<endl;
	}
	return 0;
}