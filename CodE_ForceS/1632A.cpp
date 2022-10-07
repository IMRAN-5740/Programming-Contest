#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else if (n==2)
		{
			if(s[0]=='0' and s[1]=='0')
			{
				cout<<"NO"<<endl;
			}
			else if (s[0]=='1' and s[1]=='1')
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}