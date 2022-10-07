#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll sum=a+b;
		if(sum%2==0)
		{
			cout<<"YES"<<endl; 
		}		
		else
			cout<<"NO"<<endl;
	}
	return 0;
}