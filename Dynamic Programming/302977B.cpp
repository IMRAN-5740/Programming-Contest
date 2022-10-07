#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n,m ;	cin>>n>>m ;
		string s,k;
		cin>>s;
		map<char,ll>mp;
		for(ll i=0;i<m;i++)
		{
			char p;
			cin>>p;
			mp[p]++;
		}
		ll sum=0;
		ll sub_len=0;
		for(ll i=0;i<s.size();i++)
		{
			if(mp[s[i]]>0)
			{
				sub_len++;
			}
			else
			{
				sum+=(sub_len*(sub_len+1)/2);
				sub_len=0;
				//i++;
			}
		}
		sum+=(sub_len*(sub_len+1)/2);
		cout<<sum<<endl;
		}
	return 0;
}