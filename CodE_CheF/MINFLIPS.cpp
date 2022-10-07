#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	// for(ll i=0;i<vc.size();i++)
	// {
	// 	vc.clear();
	// }
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>vc;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);	
		}
		ll res=0,cnt=0;
		if(n%2==1)
		{
			cout<<-1<<endl;
		}
		else
		{
			for(ll i=0;i<vc.size();i++)
			{
				if(vc[i]==1)
				{
					res++;
				}
				if(vc[i]==-1)
				{
					cnt++;
				}
			}
			if(res==n)
			{
				cout<<(n/2)<<endl;
			}
			else if(cnt==n)

			{
				cout<<(n/2)<<endl;
			}
			else if(res==cnt)
			{
				cout<<0<<endl;
			}
			else if(res>cnt)
			{
				ll pos=res-cnt;
				if(pos%2==0)
				{
					cout<<(pos/2)<<endl;
				}
				
			}
			else if(res<cnt)
			{
				ll pos=cnt-res;
				if(pos%2==0)
				{
					cout<<(pos/2)<<endl;
				}
			}

		}
		

		// if(res==n)
		// {
		// 	cout<<(n/2)<<endl;
		// }
		// else if(cnt==n)
		// {
		// 	cout<<(n/2)<<endl;
		// }
		// else if(res==cnt)
		// {
		// 	cout<<0<<endl;
		// }
		// else if(res>cnt)
		// {
		// 	cout<<(res-cnt)<<endl;
		// }
		// else if(cnt>res)
		// {
		// 	cout<<(cnt-res)<<endl;
		// }
		
	}
	return 0;
}