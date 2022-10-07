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
		int tt=0;
		int n=s.size();
		int ct=0;
		int o=0,c=0;
		for(int i=0;i<n;i++)
		{
				if(s[i]=='(')
				o++;
				if(s[i]==')')
				c++;
				if(s[i]=='?')
				tt++;
		}
	//	cout<<l<<" "<<m<<" "<<r<<"\n";
		if(s[0]==')'||s[n-1]=='(')
		cout<<"NO";
		else if(o==1)
		{
			if(tt%2==0)
			{
				cout<<"YES";
			}
			else
			cout<<"NO";
		}
		else
		{
			if(tt%2==0&&tt>0)
			cout<<"YES";
			else
			cout<<"NO";
		}
		cout<<"\n";
	}
	return 0;
}