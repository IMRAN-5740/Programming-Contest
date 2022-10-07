#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		ll res=(max((ll)0,x-a)+max((ll)0,y-b));
		if(res<=c)
		{
			cout<<"YES"<<endl; 
		}
		else
			cout<<"NO"<<endl;
		// if(a>=x and b>=y)
		// {
		// 	cout<<"YES"<<endl;

		// }
		// else if(a>=x and (b+c)>=y)
		// {
		// 	cout<<"YES"<<endl;
		// }
		// else if((a+c)>=x and b>=y)
		// {
		// 	cout<<"YES"<<endl;
		// }
		// else if(a<x and b<y)
		// {
		// 	if(c%2==0)
		// 	{
		// 		if((a+(c/2))>=x and (b+(c/2)>=y))
		// 		{
		// 			cout<<"YES"<<endl;
		// 		}
		// 		else
		// 			cout<<"NO"<<endl;
		// 	}
		// 	else
		// 	{
		// 		if((((a+(c/2))>=x and ((b+(c/2)+1)>=y)) or (((a+(c/2)+1)>=x) and ((b+(c/2)>=y)))))
		// 		{
		// 			cout<<"YES"<<endl;
		// 		}
		// 		else
		// 			cout<<"NO"<<endl;
		// 	}
		// }
		// else if(a>=x and b<y)
		// {
		// 	if((b+c)>=y)
		// 	{
		// 		cout<<"YES"<<endl;
		// 	}
		// 	else
		// 		cout<<"NO"<<endl;
		// }
		// else if(a<x and b>=y)
		// {
		// 	if((a+c)>=x)
		// 	{
		// 		cout<<"YES"<<endl;
		// 	}
		// 	else
		// 		cout<<"NO"<<endl;
		// }

	}
	return 0;
}