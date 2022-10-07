#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll a;
		cin>>a;
		ll x=INT_MIN;
		ll y=INT_MAX;
			if(a>=x and a<=y)
			{
				cout<<"Yes"<<endl; 
			}
			else cout<<"No"<<endl;
	}
	return 0;
}