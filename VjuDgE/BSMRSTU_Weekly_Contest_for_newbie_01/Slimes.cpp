#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		ll a,b,k;
		cin>>a>>b>>k;
		ll cnt=0;
		//if(a==b)cout<<0<<endl;
		//else
		ll res=0;
		
			while(a<b)
			{
				a=a*k;
				cnt++;
				// if(a==b)
				// {
				// 	res=cnt;
				// 	break;
				// }
				// else
				// {
				// 	res=cnt+1;
				// 	//break;
				// }
				
			}
			cout<<cnt<<endl;
		
		
	}
	return 0;
}