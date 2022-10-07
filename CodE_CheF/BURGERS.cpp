#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		string ss="";
		for(ll i=0;i<s.size()-1;i++)
		{
			if(s[i]=='0' and s[i+1]=='0')
			{
				ss+='A';
				i=i+1;

			}
			else if(s[i]=='0' and s[i+1]=='1')
			{
				ss+='T';
				i=i+1;
			}
			if(s[i]=='1' and s[i+1]=='0')
			{
				ss+='C';
				i=i+1;
			}
			if(s[i]=='1' and s[i+1]=='1')
			{
				ss+='G';
				i=i+1;
			}
		}
		cout<<ss;
		cout<<endl;
	}
	return 0;
}

/*
00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
*/