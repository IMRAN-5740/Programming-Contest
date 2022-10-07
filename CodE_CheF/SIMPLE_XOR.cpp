// #include <bits/stdc++.h>
// #define ll long long int 
// using namespace std;

// vector<ll>vc;



// 	void Compare(ll x,ll y)
// 	{
		
		
// 		ll a=x;
// 		ll b=y;
// 		ll gd=__gcd(a,b);
// 		ll lm=(a*b)/(gd);
// 		ll res=lm-gd;
// 		vc.push_back(res);
// 		//cout<<res<<endl;
// 	}
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		ll d=ceil(n/2);
// 		cout<<d+1<<endl;
// 		// ll n;
// 		// cin>>n;
// 		// if(n%2==0)
// 		// {
// 		// 	for(ll i=1,j=n;i<=n/2,j>n/2;i++,j--)
// 		// 	{
// 		// 		Compare(i,j);
// 		// 	}

// 		// 	ll mx=0;
// 		// 	for(ll i=0;i<vc.size();i++)
// 		// 	{
// 		// 		mx=max(mx,vc[i]);
// 		// 	}
// 		// 	cout<<mx<<endl;
// 		// }
// 		// else
// 		// {
// 		// 	for(ll i=1,j=n;i<=n/2,j>((n/2)+1);i++,j--)
// 		// 	{
// 		// 		Compare(i,j);

// 		// 	}
// 		// 	Compare((n/2)+1,(n/2)+1);

// 		// 	ll mx=0;
// 		// 	for(ll i=0;i<vc.size();i++)
// 		// 	{
// 		// 		mx=max(mx,vc[i]);
// 		// 	}
// 		// 	cout<<mx<<endl;
// 		// }
// 		// for(ll i=0;i<vc.size();i++)
// 		// {
// 		// 	vc.clear();
// 		// }
		
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	ll l,r;
	cin>>l>>r;
	ll cnt=0;
	bool v=false;
	ll a,b,c,d;
	for(ll i=l;i<=r;i++)
	{
		a=i;
		b=i+1;
		c=i+2;
		d=i+3;
		if((a^b^c^d)==0 and d<=r)
		{
			v=true;

			cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
			break;
					}
		else
		{
			cnt++;
			if(cnt>10)
				break;
		}
	}
	if(v==false)
		cout<<-1<<endl;
}
	return 0;
}