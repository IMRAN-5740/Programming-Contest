#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		string s;cin>>s;
		map<char,ll>mp;
		
		ll ans=0;
		ll cnt=1;
		ll len=s.size();
		for(ll i=0;i<len-1;i++)
		{
			if(s[i]==s[i+1])cnt++;
			else
			{
				ans=max(ans,cnt);
				cnt=1;
			}
		}
		ans=max(ans,cnt);
		cout<<ans<<endl;
		
	}
	return 0;
}