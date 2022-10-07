#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int res=a+b+c;
		if(res==180)
		{
			cout<<"YES"<<endl;
		}else
		{
			cout<<"NO"<<endl;
		}

	}
		return 0;
}