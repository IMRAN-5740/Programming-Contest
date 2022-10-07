#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 int main()
 {
 	ll t;
 	cin>>t;
 	while(t--)
 	{
 		ll l,r,a;
 		cin>>l>>r>>a;
 		// ll tem1=l;
 		// ll tem2=r;
 		// if(tem1<tem2)
 		// {
	 	// 	if(r%a==0)
	 	// 	{
	 	// 		ll res=((r-1)/a)+(r-1)%a;
	 	// 		cout<<res<<endl;
	 	// 	}
	 	// 	else
	 	// 	{
	 	// 		ll res=(r/a)+(r%a);
	 	// 		cout<<res<<endl;
	 	// 	}
 		// }
 		// else
 		// {
 		// 	if(l%a==0)
	 	// 	{
	 	// 		ll res=((abs(l-1))/a)+(l-1)%a;
	 	// 		cout<<res<<endl;
	 	// 	}
	 	// 	else
	 	// 	{
	 	// 		ll res=((abs(l/a))+(l%a));
	 	// 		cout<<res<<endl;
	 	// 	}
 		// }
 		ll x=0;
 		if(a==1)
 		{
 			cout<<r<<endl;
 			continue;
 		}
 		if(r-(r%a)-1>=l)
 		{
 			x=r-(r%a)-1;
 		}
 		else
 		{
 			x=r;
 		}
 		ll ans=(x/a)+(x%a);
 		ll ans1=(r/a)+(r%a);
 		ll res=max(ans,ans1);
 		cout<<res<<endl;
 	}
 	return 0;
 }