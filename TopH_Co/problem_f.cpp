#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	long long  n,x,y,m=0,p=0;
	while (t--)
	{
	cin>>n>>x>>y;
	if (n%2!=0)
	{
		int k=n/2;
		if (x>k && y>=k)
		{
			cout<<"YES\n";
		}
		else 
			cout<<"NO\n";
	}
	else if (n%2==0)
	{
		int k=n/2;
		if (x>=k && y>=k)
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}

}
	return 0;
}