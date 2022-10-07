#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll l_range=-1*(pow(2,31));
	ll u_range=1*(pow(2,31))-1;
	
	if(n>u_range || n<l_range)
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}
	
	return 0;
}