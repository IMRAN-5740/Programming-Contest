#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		n=pow(n,2);
		ll res=x/n;
		cout<<res<<endl;
	}
	return 0;
}