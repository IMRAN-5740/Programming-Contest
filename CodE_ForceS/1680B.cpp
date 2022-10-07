#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		string s[n+4];
		for(ll i=0;i<n;i++)
		{
			cin>>s[i];
		}

		ll cnt=0,pos1=-1,pos2=-1,ans=0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				if(s[i][j]=='R')
				{
					pos1=i;
					pos2=j;
					cnt=1;
					break;
				}
			}
			if(pos1!=-1)
			{
				break;
			}
		}

		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<pos2;j++)
			{
				if(s[i][j]=='R')
				{
					ans=1;
					break;
				}
			}
		}


		for(ll i=0;i<pos1;i++)
		{
			for(ll j=0;j<m;j++)
			{
				if(s[i][j]=='R')
				{
					ans=1;
					break;
				}
			}
		}
		if(cnt==0 or ans==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}

