#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		cin>>n;
		for (int j=1;j<=n;j++)
		{
			cin>>a;
		}
		if (n==1){
			cout<<"1\n";
		}
		else if (n==2)
		{
			cout<<"2\n";
		}
		else
			cout<<n/2<<endl;
		}
	return 0;
}