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
		ll cnt=0;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='N')cnt++;
		}
		if(cnt==1)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}