#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<1<<endl;
		}
		else if(n==2)
		{
			cout<<2<<endl;
		}
		else if (n==3)

		{
			cout<<21<<endl;
		}
		else
		{
			if(n%2==0)
			{
				int res=n-3;
				cout<<res<<21<<endl;
			}
			else
			{
				int res=n-3;
				cout<<21<<res<<endl;
			}
		}
	}
	return 0;
}