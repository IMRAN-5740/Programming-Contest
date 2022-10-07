#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		string s;
		s={"1230456789"};
		string p;
		cin>>p;
		char m;
		// for(int i=0;i<s.size();i++)
		// 	cout<<s[i];
		sort(s.begin(),s.end());
		//cout<<s<<endl;
		sort(p.begin(),p.end());

		// for(ll i=0;i<s.size();i++)
		// {
		// 	char ck=s[i];
		// 	for(ll j=0;j<p.size();j++)
		// 	{
		// 		if(ck!=p[j])
		// 		{
		// 			m=ck;
		// 			break;
		// 		}
		// 	}
		//	}
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]!=p[i])
			{
				m=s[i];
				break;
			}
		}
		cout<<m<<endl;
	}
	return 0;
}