#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll p=1;
	//cin>>t;
	while(p--)
	{
		ll t;
		cin>>t;
		ll res=(t*t)+(2*t)+3;
		ll res2=(res*res)+(2*res)+3;
		ll res1=res+t;
		ll res12=(res1*res1)+(2*res1)+3;
		ll ans=res2+res12;
		ll cnt= (ans*ans)+(2*ans)+3;
		cout<<cnt<<endl;

	}
	return 0;
}