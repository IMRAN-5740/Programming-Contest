#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>generateDivisor(ll res= (ll)(1e12))

{
	vector<ll>v;
	ll i;
	for(i=1;i*i<res;i++)
	{
		if(res%i==0)
		{
			v.push_back(i);
			v.push_back(res/i);
		}
	}
	if(i*i==res)
		{
			v.push_back(i);
		}
		return v;
}


int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll a,b;cin>>a>>b;
		ll res=__gcd(a,b);
		vector<ll>vc=generateDivisor(res);
		sort(vc.begin(),vc.end());
		for(auto i:vc)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		ll n;cin>>n;
		while(n--)
		{
			ll l,r;cin>>l>>r;
			auto it=lower_bound(vc.begin(),vc.end(),r);
			if(it==vc.end() or *it>r)
			{
				it--;
			}
			if(l<=*it and *it<=r)
			{
				cout<<*it<<endl;
			}
			else
			cout<<-1<<endl;

		}
	}
	return 0;
}