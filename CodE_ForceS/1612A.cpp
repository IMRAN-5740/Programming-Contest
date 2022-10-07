#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int res=x+y;
		if(res%2==1)
		{
			cout<<-1<<" "<<-1<<endl;
		}
		else if(x%2==0 and y%2==0)
		{
			cout<<x/2<<" "<<y/2<<endl;
		}
		else if (x%2==1 and y%2==0)
		{
			cout<<x/2+1<<" "<<y/2<<endl;
		}
		else
		{
			cout<<x/2<<" "<<y/2+1<<endl;
		}
		// else
		// {
		// 	cout<<x/2<<" "<<y/2+1<<endl;
		// }
	}
	return 0;
}