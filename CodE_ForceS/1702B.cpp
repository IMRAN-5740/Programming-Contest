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
		ll ans=1;
		set<char>st;
		for(ll i=0;i<(ll)s.size();i++)
		{
			st.insert(s[i]);
			if(st.size()>3)
			{
				ans++;
				st.clear();
				st.insert(s[i]);
			}
		}	
		cout<<ans<<endl;	
	}
	return 0;
}