#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll arr[n+1];
		ll cnt0=0,cnt1=0,cnt2=0;
		for(ll i=1;i<=n;i++)
		{
			ll x;cin>>x;
			ll rem=x%3;
			if(rem==0)cnt0++; 
			else if(rem==1)cnt1++;
			else if(rem==2)cnt2++;
		}
		ll val=n/3;
		ll a=cnt0-val;
		ll b=cnt1-val;
		ll c=cnt2-val;
		ll cnt=0;
		if(a<0)
		{
			if(c>0)
			{
				ll mn=min(abs(a),c);
				cnt+=mn;
				a+=mn;
			}
			if(a<0)
			{
				ll y=abs(a);
				cnt+=(y*2);
			}
		}
		if(b<0)
		{
			if(a>0)
			{
				ll mn=min(abs(b),a);
				cnt+=mn;
				b+=mn;
			}
			if(b<0)
			{
				ll y=abs(b);
				cnt+=(y*2);
			}
		}
		if(c<0)
		{
			if(b>0)
			{
				ll mn=min(abs(c),b);
				cnt+=mn;
				c+=mn;
			}
			if(c<0)
			{
				ll y=abs(c);
				cnt+=(y*2);
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}