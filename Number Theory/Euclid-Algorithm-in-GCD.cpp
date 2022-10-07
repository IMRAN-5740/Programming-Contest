#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
	if(b==0)return a;
	if(a==0)return b;
	
	return GCD(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int ans= GCD(a,b);
		cout<<ans<<endl;
	}
	return 0;
}