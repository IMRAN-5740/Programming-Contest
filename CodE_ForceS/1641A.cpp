#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,x;	cin>>n>>x;
		vector<ll>vc;
		map<ll,ll>mp;
		for(ll i=0;i<n;i++)
		{
			ll p;
			cin>>p;
			vc.push_back(p);
		}
		ll ans=0;
		sort(vc.begin(),vc.end());
		for(ll i=0;i<vc.size();i++)
		{

				if(vc[i]!=-1)
				{
					ll target=vc[i]*x;
					ll found=-1;
					
					ll low=i+1;
					ll high=vc.size()-1;
					while(low<=high)
					{
						ll mid=(low+high)/2;
						if(vc[mid]==target)
						{
							found=mid;
                        	high=mid-1;
						}
						else if(vc[mid]<target)
						{
							low=mid+1;
						}
						else
						{
							high=mid-1;
						}
					}
					if(found==-1)  
					{
						ans++;
					}
					else
					{
						vc[found]=-1;
					}
				}
				
		}
		cout<<ans<<endl;
		
		

	}
	return 0;
}