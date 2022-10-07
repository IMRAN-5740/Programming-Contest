#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	vector<ll>vc;
	while(t--)
	{
		string s;
		for(ll i=0;i<vc.size();i++)
		{
			vc.clear();
		}
		cin>>s;
		ll len=s.size();
		ll lsum=0;
		ll rsum=0;
		for(ll i=0;i<s.size();i++)
		{
			ll n;
			char c=s[i];
			 n = c - '0';
			vc.push_back(n);
		}
		//for(int j=0;j<s.s)
		for(ll i=0;i<len/2;i++)
		{
			lsum+=vc[i];
		}
		for(ll i=len/2;i<vc.size();i++)
		{
			rsum+=vc[i];
		}
		if(lsum==rsum)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
		lsum=0;
		rsum=0;
		
	}
	return 0;
}