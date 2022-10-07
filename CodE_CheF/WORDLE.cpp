#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,s1;
		cin>>s;
		cin>>s1;
		vector<char>vc;

		for(int i=0;i<s.size();i++)
		{
			if(s[i]==s1[i])
			{
				vc.push_back('G');
			}
			else
			{
				vc.push_back('B');
			}
		}
		for(auto it:vc)
		{
			cout<<it;
		}
		cout<<endl;
	}
	return 0;
}