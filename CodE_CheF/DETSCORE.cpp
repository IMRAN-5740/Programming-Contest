// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,x;
// 		cin>>n>>x;
// 		// // if(n==x)cout<<"Alice"<<endl;
// 		// // else if(n>x)cout<<"Alice"<<endl;
// 		// // else if(n<x)cout<<"Bob"<<endl;
// 		// // if((n+x)%4==0 or (n+x-1)%4==0)cout<<"Alice"<<endl;
// 		// // else cout<<"Bob"<<endl;
// 		// ll res=abs((n-1)/10 - (x-1)/10);
// 		// cout<<res<<endl;
// 		if(n>=1  and n<=10)n=10;
// 		if(x>=1  and x<=10)x=10;
// 		if(n>=11 and n<=20)n=20;
// 		if(x>=11 and x<=20)x=20;
// 		if(n>=21 and n<=30)n=30;
// 		if(x>=21 and x<=30)x=30;
// 		if(n>=31 and n<=40)n=40;
// 		if(x>=31 and x<=40)x=40;
// 		if(n>=41 and n<=50)n=50;
// 		if(x>=41 and x<=50)x=50;
// 		if(n>=51 and n<=60)n=60;
// 		if(x>=51 and x<=60)x=60;
// 		if(n>=61 and n<=70)n=70;
// 		if(x>=61 and x<=70)x=70;
// 		if(n>=71 and n<=80)n=80;
// 		if(x>=71 and x<=80)x=80;
// 		if(n>=81 and n<=90)n=90;
// 		if(x>=81 and x<=90)x=90;
// 		if(n>=91 and n<=100)n=100;
// 		if(x>=91 and x<=100)x=100;

// 		ll res=(abs(n-x))/10;
// 		cout<<res<<endl;

// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if((n&1)==0)
		{
			string  hbin;
			for(ll i=1;i<=(n/2);i++)
			{
				if((i&1)==1)
				{
					hbin+='0';
				}
				else
				{
					hbin+='1';
				}
			}
			string b;
			b+=hbin;
			reverse(b.begin(),b.end());
			b+=hbin;
			cout<<b<<endl;
		}
		else
		{
			string b;
			for( ll i=1;i<=n;i++)
			{
				if((i &1)==1)
				{
					b+='0';
				}
				else
				{
					b+='1';
				}
			}
			cout<<b<<endl;
		}
	}
	return 0;
}