#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll ans=0;
		
		while(b>0 and c>1)
		{
			ans+=3;
			b--;
			c-=2;
		}
		while(a>0 and b>1)
		{
			ans+=3;
			a--;
			b-=2; 
		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}