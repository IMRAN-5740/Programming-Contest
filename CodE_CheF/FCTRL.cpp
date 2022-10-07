#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll sum=0,cnt=0;
		ll res=5;
		while(res<=n)
		{	
			
			cnt=cnt+(n/res);
			res=res*5;
			//cout<<cnt<<endl;
		}
		cout<<cnt<<endl;		
	}
	return 0;
}