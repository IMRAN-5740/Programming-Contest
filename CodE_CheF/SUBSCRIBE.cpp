#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
	ll n,x;
	cin>>n>>x;
	ll res=n/6;
	ll rem=n%6;
	ll cnt=0;
	if(rem>0 and rem<6)
	{
		cnt++;
	}	
	ll ans=res+cnt;
	cout<<(ans*x)<<endl;	
	}
	return 0;
}