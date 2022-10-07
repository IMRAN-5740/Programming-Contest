#include<bits/stdc++.h>
#define float double
using namespace std;
int main()
{
	int n;
	cin>>n;
	float arr[n];
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	float res=float(sum/n);
	printf("%.12f\n",res);


	return 0;
}