
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 void solve()
 {
 		
 }
int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n+1];
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			arr[i]=x;
		}
		ll cnt=0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]==0)cnt++;
		}
	//	ll cnt=count(arr,arr+n,0);
		if(cnt==n)
			{
				cout<<0<<endl;
				return;
			}
		 if(cnt==0)
			{
				cout<<1<<endl;
				return;
			}
			ll div=0;
			for(ll i=0;i<n;i++)
			{
				if(arr[i]==0)return;
				if(i==(n-1) or arr[i+1]==0)
					{
						div++;
					}
			}
		// if(arr[0]==0 and arr[n-1]==0)
		// 	{
		// 		cnt--;
		// 	}
			if(div==1)cout<<1<<endl;
			else cout<<2<<endl;
		//cout<<cnt<<endl;
	}
	return 0;
}