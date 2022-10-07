#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int mn=min(a,b);
		int mx=max(c,d);
		int mnx=max(a,b);
		int mxn=min(c,d);
		if(mn>mx or mnx<mxn)
		{
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;

	}
	
	return 0;
}