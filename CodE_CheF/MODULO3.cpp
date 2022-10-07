#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	
	while(t--)
	{
		ll a,b;
		ll ans=0,ans1=0,cnt=0,res1=0,res=0,rnt=0;
		cin>>a>>b;
		ll temp=a;
		ll temp1=b;
		if((a%3==0) or(b%3==0))
		{
			cout<<0<<endl;
			//continue;
		}
		else
		{
			label1:
			cnt++;
			ll  s=a-b;
			a=a-b;
			b=s;
			a=abs(a);
			b=abs(b);


			if(a%3==0 or b%3==0)
			{
				cout<<cnt<<endl;
			}
			else
			{
				goto label1;
			}
		}
		// while(a)
		// {
			
		// 	ans1++;
		// 	if(a%3==0)
		// 	{
		// 		cnt=1;
		// 		res=a;
		// 		break;
		// 	}
		// 	else
		// 		continue;
		// 	a=abs(a-b);
		// }
		// while(b)
		// {
			
		// 	ans++;
		// 	if(b%3==0)
		// 	{
		// 		rnt=1;
		// 		res1=b;
		// 		break;
		// 	}
		// 	else
		// 		continue;
		// 	b=abs(b-a);
		// }
		// ll pos=min(ans,ans1);
		// cout<<pos<<endl;
	}
	return 0;
}