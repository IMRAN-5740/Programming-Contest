#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//ll res,cnt,pnt;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll cnt=0,pnt=0; 
		ll n,m;
		cin>>n>>m;
		ll mn=INT_MIN;
		ll res=0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				ll x;
				cin>>x;
				if(x>mn)
				{
					mn=x;
					cnt=i;
					pnt=j;
				}
			}
		}
		res=max(cnt+1,n-cnt)*max(pnt+1,m-pnt);
		cout<<res<<endl;
	}
	return 0;
}