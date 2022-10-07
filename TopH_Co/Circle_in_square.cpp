#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
	int t;
	cin>>t;
	double n,res,k,res1,point;
	for (int i=1;i<=t;i++)
	{
		cin>>n;
		res=pi*n*n;
		k=n*2;
		res1=k*k;
		point=(res1-res);
		//cout<<point<<endl;
		printf("Case %d: %0.2f\n",i,point);
	}
	return 0;
}