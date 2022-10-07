#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf
int main()
{
	ll n,t,k;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
	cin>>n;
	if (n==0)
	{
		printf("0\n");
	}
	else
	 k=((n/2)+(n%2));
	  cout<<k<<endl;
	}
	return 0;
}