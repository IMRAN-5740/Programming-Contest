#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()

{
	ll l,r;
	cin>>l>>r;
	ll mx=INT_MIN;
	vector<ll>vc;
	for(ll i=l;i<r;i++)
	{
		ll res=i^(i+1);
		vc.push_back(res);
	}
	for(ll i=0;i<vc.size();i++)
	{
		mx=(max(vc[i],mx));
	
	}
	cout<<mx<<endl;
	return 0;
}