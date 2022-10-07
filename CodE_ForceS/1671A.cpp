#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		
		ll res=0;
			string s;cin>>s;
			for(ll i=0;i<s.size();i++)
			{
				ll cnt=0;
				if(s[i]=='a')
				{
					while(i<s.size() and s[i]=='a')
					{
						cnt++;
						i++;
					}
					i--;
				}
				else if(s[i]=='b')
				{
					while(i<s.size() and s[i]=='b')
					{
						cnt++;
						i++;
					}
					i--;
				}

				if(cnt<=1)
				{
					res=1;break;
				}
			}
			if(res==0)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			res=0;

	}
	return 0;
}