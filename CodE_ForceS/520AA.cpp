#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<char>st;
	string s;
	cin>>s;
	//cout<<s.size()<<endl;
	for(int i=0;i<n;i++)
	{
		if(s[i]>='A' and s[i]<='Z')
		{
			s[i]+=32;
		}
	}
	
	for(int i=0;i<n;i++)
		{
			st.insert(s[i]);
		}
	//	cout<<st.size()<<endl;
		if(st.size()==26)
		{
			cout<<"YES"<<endl;

		}
		else
		{
			cout<<"NO"<<endl;
		}
	return 0;
}
