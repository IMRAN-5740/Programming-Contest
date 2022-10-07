#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	set<char>st;
	int len=s.size();
	for(int i=0;i<len;i++)
	{
		if(s[i]>='A' and s[i]<='Z')

			s[i]=s[i]+32;
	}
	for(int i=0;i<len;i++)
	{
		if(s[i]>='a' and s[i]<='z')
		{
			st.insert(s[i]);
		}
	}
	cout<<st.size()<<endl;
	return 0;
}