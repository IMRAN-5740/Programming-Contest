#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		string s[9];
		for(ll i=0;i<8;i++)
		{
				cin>>s[i];		
		}
			
			ll cnt=0;
			ll r=0;
			ll c=0;
			for(ll i=1;i<7;i++)
			{
				for(ll j=1;j<7;j++)
				{
					if(s[i-1][j-1]=='#' and s[i+1][j-1]=='#' and s[i-1][j+1]=='#' and s[i+1][j+1]=='#')
					{
					r=i+1;
					c=j+1;

					}
				}
			}
			cout<<r<<" "<<c<<endl;
	}
	return 0;
}