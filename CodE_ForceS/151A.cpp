#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n,k,l,c,d,p,nl,np;
		cin>>n>>k>>l>>c>>d>>p>>nl>>np;
		ll res=(k*l)/nl;
		ll res1=(c*d);
		ll res2=p/np;
		ll ans=(min(res,min(res1,res2)))/n;
		cout<<ans<<endl;
	}
	return 0;
}