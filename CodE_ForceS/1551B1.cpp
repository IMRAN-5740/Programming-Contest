#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		map<char,int>mp;
		int len=s.size();
		for(int i=0;i<len;i++)
		{
			mp[s[i]]++;
		}
		int red=0;
		int green=0;
		for(auto it:mp)
		{
			int res=it.second;
			if(res>1)
			{
				red++;
				green++;
			}
			else
			{
				if(red>green)
				{
					green++;
				}
				else
				{
					red++;
				}
			}
		}
		if(red>green)
		{
			red--;
		}
		cout<<red<<endl;
	}
	return 0;
}