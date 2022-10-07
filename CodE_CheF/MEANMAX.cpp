#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int  n;
		cin>>n;
		int  arr[n+1];
		for( int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		double sum=0.0;
		double max=0.0;
		for(int  i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		double sum1=0.0;
		for(int i=0;i<n;i++)
		{
			sum1+=arr[i];
			sum-=arr[i];
			double d1=(double)sum1/(i+1);
			double d2=(double)sum/(n-i-1);
			if(d1+d2>max)
			{
				max=d1+d2;
			}
		}
		printf("%0.6lf\n",max);

	}
	return 0;
}
