#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
	ll x,a,y;
	cin>>x>>y>>a;
	if(a>=x and a<y)
	{
		cout<<"YES"<<endl; 
	}		
	else
		cout<<"NO"<<endl;
	}
	return 0;
}