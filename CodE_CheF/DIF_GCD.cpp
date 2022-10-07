#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;cin>>n>>m;
		ll res1=0,res2=0;
		if(m<(2*n))
		{
			cout<<m<<" "<<m<<endl;
		}		
		else if(m>=(2*n) and m%n==0)
		{
			cout<<m<<" "<<n<<endl;
		}
		else
		{
			ll rem=m/2;
			if(m>=(2*n))
			{
				rem=2*n;
			}
			ll def=INT_MIN;
			for(ll i=n;i<=rem;i++)
			{
				ll div=m/i;
				ll cdef=(i*div)-i;
				if(cdef>def)
				{
					res1=i;
					res2=(i*div);
					def=cdef;
				}
			}
			cout<<res1<<" "<<res2<<endl;
		}
	}
	return 0;
}