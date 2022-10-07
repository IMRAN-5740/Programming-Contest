#include<bits/stdc++.h>
#define ll long long int
#define dd double
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
			dd n,x,y,a,b;
			cin>>n>>x>>y>>a>>b;
			dd pkilo=n/a;
			dd dkilo=n/b;
			dd res1=pkilo*x;
			dd res2=dkilo*y;
			if(res1==res2)cout<<"ANY"<<endl;
			else if(res1> res2)cout<<"DIESEL"<<endl;
			else cout<<"PETROL"<<endl;
	}
	return 0;
}