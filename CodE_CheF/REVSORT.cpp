#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,x;cin>>n>>x;
		vector<ll>vc;
		ll arr[n+1];
		for(ll i=0;i<n;i++)
		{
			ll y;
			cin>>y;
			arr[i]=y;
			vc.push_back(y);
		}	
		// sort(arr,arr+n);
		// sort(vc.begin(),vc.end());	
		bool res=true;
		for(ll  i=0;i<n-1;i++)
		{
			if(vc[i]>vc[i+1])
			{
				if((vc[i]+vc[i+1])<=x)
				{
					swap(vc[i],vc[i+1]);
				}
				else
				{
					res=false;
					break;
				}

			}
		}
		if(res==true)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}