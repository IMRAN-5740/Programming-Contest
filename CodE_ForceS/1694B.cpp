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
		string s;
		cin>>s;
		ll res=s.size();
		for(ll i=1;i<n;i++)
		{
			if(s[i]!=s[i-1])
			{
				res=res+i;
			}
		}	
		cout<<res<<endl;	
	}
	return 0;
}