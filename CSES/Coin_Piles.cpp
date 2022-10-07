#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b;	cin>>a>>b;
		//bool chk=false;
		while(a!=0 and b!=0)
		{
			if(a>b)
			{
				a=a-2;
				b=b-1;
			}
			else
			{
				a=a-1;
				b=b-2;
			}
		}		
		if(a==0 and b==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;
}