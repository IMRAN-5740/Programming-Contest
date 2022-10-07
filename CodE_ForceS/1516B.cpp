#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+3];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int PrefixSum[n+3];
		PrefixSum[0]=0;
		for(int i=1;i<=n;i++)
		{
			PrefixSum[i]=PrefixSum[i-1]^arr[i];
		}
		//partition 2
		int ans=0;
		for(int i=1;i<n;i++)
		{
			int a=PrefixSum[i];
			int b=PrefixSum[n]^PrefixSum[i];
			if(a==b)
			{
				ans=1;
				break;
			}
		}
		for(int i=1;i<n-1;i++)
		{
			int a=PrefixSum[i];
			for(int j=i+1;j<n;j++)
			{
				int b=PrefixSum[j]^PrefixSum[i];
				int c=PrefixSum[n]^PrefixSum[j];
				if(a==b  and b==c)
				{
					ans=1;
					break;
				}
			}
				
		}
		if(ans==1)
		{	
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}	
	return 0;
}