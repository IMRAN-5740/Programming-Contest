#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,mid;
	while(t--)
	{
		cin>>n>>m;
		int a[n*2+1];
		int l=a[1];
		int r=a[n];
		for (int i=1;i<n*2;i++)
		{
			cin>>a[i];
			mid=(l+r)/2;
		}
		cout<<mid;
	}
	return 0;
}