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
 
       ll mx=0,mn=0;
        ll mx1=0,mn1=0;
       while(n--)
        {
            ll x,y;
            cin>>x>>y;
            mx=max(x,mx);
            mn=min(x,mn);
            mx1=max(y,mx1);
            mn1=min(y,mn1);
        }
        mn=abs(mn);
        mn1=abs(mn1);
        cout<<(mx1+mx+mn+mn1)*2<<endl;
	}
	return 0;
}