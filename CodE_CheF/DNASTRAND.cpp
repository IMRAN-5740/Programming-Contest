#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		string s;cin>>s;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='A')cout<<"T";
			if(s[i]=='T')cout<<"A";
			if(s[i]=='C')cout<<"G";
			if(s[i]=='G')cout<<"C";
		}
		cout<<endl;
	}
	return 0;
}