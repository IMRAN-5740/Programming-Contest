#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a==(b+1) or b==(a+1))
		{
			cout<<"Yes"<<endl; 
		}
		else if((a==1 and b==10 )or(a==10 and b==1))
		{
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}