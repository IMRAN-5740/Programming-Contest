#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string S,T;
		cin>>S>>T;
		ll len=S.size();
		map<char,int>mp;
		//map<char,int>mp::iterator it;
		for(ll i=0;i<len;i++)
		{
			mp[S[i]]++;
		}
		cout<<mp['a']<<" "<<mp['b']<<" "<<mp['c'];

		if(T=="abc" and mp['a']!=0 and mp['b']!=0 and mp['c']!=0)
		{

			for(ll i=0;i<mp['a'];i++){cout<<'a';}
			for(ll i=0;i<mp['c'];i++){cout<<'c';}
			for(ll i=0;i<mp['b'];i++){cout<<'b';}
				
			for(char ch='d';ch<='z';ch++)
			{
				for(ll i=0;i<mp[ch];i++)
				{
					cout<<ch;
				}
			}
			cout<<"\n";
		}	
		else
		{
			for(auto it:mp)
			{
				for(ll i=1;i<=it.second;i++)
				{
					cout<<it.first;
				}
			}
			cout<<"\n";
		}

	}
	return 0;
}