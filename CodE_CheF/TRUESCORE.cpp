#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,m,z=0,n=0,p=0;
		cin>>m;
		while(m--)
		{
			cin>>k;
			if(k==0)
			{
				z++;
			}
			else if (k>0)
			{
				p++;
			}
			else
			{
				n++;
			}
		}
		p--;
		n--;
		ll ans=0;
		if(p>0)
		{
			ans=(((p)*(p+1))/2);
			//ans=((n)*(n+1))/2;
			//cout<<ans<<endl;
		}
		if(n>0)
		{
			ans+=((n)*(n+1))/2;	
		}
		cout<<ans<<endl;
	}
	return 0;
}