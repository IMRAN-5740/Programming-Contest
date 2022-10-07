#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,t;
		cin>>s>>t;
		if(s.size()==t.size())
		{
			int len=s.size();
			bool flag=true;
			for(int i=0;i<len;i++)
			{
				if(s[i]!=t[i])
				{
					flag=false;
				}
			}
			if(flag==false)
			{
				cout<<"NO"<<endl;
			}
			else

			cout<<"YES"<<endl;
		}
		else
		{
			for(int i=0;i<s.size();i++)
			{
				if(s[i]==t[i])
			}
		}
	}
	return 0;
}