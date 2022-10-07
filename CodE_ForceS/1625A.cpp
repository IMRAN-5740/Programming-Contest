#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l;
		cin>>n>>l;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		map<int,int>one,zero;
		for(int i=0;i<n;i++)
		{
			int x=arr[i];
			for(int j=0;j<l;j++)
			{
				if(x&1)
				{
					one[j]++;
				}
				else
				{
					zero[j]++;
				}
				x=(x>>1);
			}
		}
		int ans=0;
		for(int i=0;i<l;i++)
		{
			if(one[i]>zero[i])
			{
				ans=ans+pow(2,i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}