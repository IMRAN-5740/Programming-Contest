#include <bits/stdc++.h>
using namespace std;
int solve()
{
	int n;
	cin>>n;
	int sum=0;
	int a[n*2];
	for(int i=0;i<n*2;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%2==0)
		{
			cout<<"YES"<<endl;
		}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}

}