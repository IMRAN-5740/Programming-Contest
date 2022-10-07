#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	ll mod=1000000007;
	vector<ll>vc;
	vc.push_back(1);
	for(ll i=0;i<1000010;i++)
	{
		//ll x;
	//	cin>>x;
		ll res=vc[vc.size()-1]*2;
		res=res%mod;
		vc.push_back(res);

	}
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		cout<<(vc[x-1]*y)%mod<<endl;	
	}
	return 0;
}