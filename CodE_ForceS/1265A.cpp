#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		string s;cin>>s;
		bool cnt=false;
		for(ll i=0; i<s.size()-1;i++)
		{
			if(s[i]==s[i+1] and (s[i]!='?' and s[i+1]!='?'))
			{
				cnt=true;
				break;
			}
		}
		if(cnt==true)cout<<-1<<endl;
		else
		{
			for(ll i=0;i<s.size();i++)
			{
				if(s[i]=='?' and i==0)
				{
					if(s[i+1]!='a')
						s[i]='a';
					else s[i]='b';
				}
				else if(s[i]=='?' and i==s.size()-1)
				{
					if(s[i-1]!='a')
						s[i]='a';
					else s[i]='b';
				}
				else if(s[i]=='?')
				{
					for(char j='a';j<='c';j++)
					{
						if(s[i-1]!=j and s[i+1]!=j)
							{
								s[i]=j;
							}
					}
				}
			}
			cout<<s<<endl;

		}

	}
	return 0;
}