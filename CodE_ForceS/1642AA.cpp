#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool Check_Parallel_of_X(ll x1,ll x2, ll y1,ll y2)
{
	if(y1==y2 and y1>0)
	{
		return 1;
	}
	else return 0;
}


int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll x1,y1;cin>>x1>>y1;
		ll x2,y2;cin>>x2>>y2;
		ll x3,y3;cin>>x3>>y3;
		ll ans=0;
		bool flag=Check_Parallel_of_X(x1,x2,y1,y2);
		if(flag==1 and y3<y1)
		{
			ans+=abs(x1-x2);
		}
		bool flag1=Check_Parallel_of_X(x1,x3,y1,y3);
		if(flag1==1 and y2<y1)
		{
			ans+=abs(x1-x3);
		}
		bool flag2=Check_Parallel_of_X(x2,x3,y2,y3);
		if(flag2==1 and y1<y2)
		{
			ans+=abs(x3-x2);
		}
		cout<<ans<<endl;

	}
	return 0;
}