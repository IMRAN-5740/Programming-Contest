#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll cnt=1;
		int len=s.size();
		char ss=s[len/2];
		for(ll i=(len/2)-1;i>=0;i--)
		{
			if(ss==s[i])
			{
				cnt++;
			}
			else
			{
				break;
			}
		}
		for(ll i=(len/2)+1;i<s.size();i++)
		{
			if(ss==s[i])
			{
				cnt++;
			}
			else
			{
				break;
			}
		}

		cout<<cnt<<endl;
	}
	return 0;
}