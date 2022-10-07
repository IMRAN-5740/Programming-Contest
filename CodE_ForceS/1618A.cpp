#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=7;
		int arr[7];
		int a,b=0,c=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int min=arr[0];
		int max=arr[n-1];
		int abs=max-min;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]+arr[j]==abs)
				{
					b=arr[i];
					c=arr[j];
				}

			}
			
		}
		cout<<min<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}