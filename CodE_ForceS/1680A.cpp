#include<bits/stdc++.h>
using namespace std;
int main()
{int a,b,c,d;
	int res=0;
		int cnt=0,pos=0;
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>a>>b>>c>>d;
		if(max(a,c)<=min(b,d))
		{
			cout<<max(a,c)<<endl;
		}
		else
			cout<<(a+c)<<endl;
		// int sum=a+b;
		
		// if(sum%2==1)
		// {
		// 	res=min(a,b);
		// 	pos=min(c,d);
		// 	if(res==pos)
		// 	{
		// 		cout<<res<<endl;	
		// 	}
		// 	else
		// 		cout<<(pos+sum)<<endl;

		// }
		// else
		// {
		// 	res=(a+b)/2;
		// 	//cout<<res<<endl;
		// 	pos=min(c,d);
		// 	//cout<<pos<<endl;
		// 	int res1=pos+res;
		// 	if(res==pos)
		// 	{
		// 		cout<<res<<endl;	
		// 	}
		// 	else
		// 	{
		// 		cout<<res1<<endl;
		// 	}
		// }
		// sum=0;
		// res=0;
		// pos=0;
	}
	return 0;
}