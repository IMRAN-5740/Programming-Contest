#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	map<string,int>mp;
	string s , st;
	ll t;
	cin>>t;
	ll mx=0;
    ll temp = 0 ;
	while(t--)
	{
		cin>>s;
		mp[s]++;
		for(auto it:mp)
		{
			mx = it.second ;
			if(temp < mx)
			{
				temp = mx ;
				st = it.first ;
			}
		}
	}
	cout << st << endl;
	return 0;
}
