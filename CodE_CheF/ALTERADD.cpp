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
		ll i=1;
		ll cnt=0;
		ll def=abs(a-b);
		if(def%3==0 or def%3==1)
		{
			cnt=1;
		}
		// while(a!=b and a<=b)
		// {
		// 	if(i%2==1)
		// 	{
		// 		a=a+1;
		// 	}
		// 	else
		// 	{
		// 		a=a+2;
		// 	}
		// 	cnt=1;
		// 	i++;
		// }
		if(cnt==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;		
	}
	return 0;
}