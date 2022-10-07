#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		bool flag=false;
		for(int i=1;i<=n;i++)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(b==c) flag=true;
		}
		int res=x*x;
		if(res%4==0 and flag==true)
		{
			cout<<"YES"<<endl; 
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}