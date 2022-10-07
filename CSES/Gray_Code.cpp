#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void bin(ll n, ll p)
{
	
	//cout << "0";
	ll res=p-1;
	for (ll i = 1 << res; i > 0; i = i / 2)
	{
		if((n & i) != 0)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{

		ll n;cin>>n;

		ll target=(ll)pow(2,n);
		//ll arr[50];
		//cout<<target<<endl;
		//vector<ll>vc;
		
		for(ll j=0;j<target;j++)
		{
			ll val=j;
			bin(val,n);
			cout<<endl;
		}
	}


return 0;
}