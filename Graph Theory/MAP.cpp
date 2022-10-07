#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	cin>>s;
	map<char,int>mp;
	for(int i=0;i<s.size();i++)
	{
		mp[s[i]]++;
	}
	set<char>st;
	for(int i=0;i<s.size();i++)
	{
		st.insert(s[i]);
	}
	for(auto it =mp.begin();it!=mp.end();it++)
	{
		pair<char,int>pr=*it;
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	cout<<endl;
	return 0;
}