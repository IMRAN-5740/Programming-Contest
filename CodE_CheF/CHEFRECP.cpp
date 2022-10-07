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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int freq[1001]{0};
		int times[1001]{0};
		int Visit[1001]{0};
		
		for(int i=0;i<n;i++)
		{
			freq[arr[i]]++;
		}
		for(int i=1;i<=1000;i++)
		{
			times[freq[i]]++;
		}
		bool flag=false;
		for(int i=1;i<=n;i++)
		{
			if(times[i]>1)
			{
				flag=true;
				break;
			}
		}
		if(!flag)
		{
			Visit[arr[0]]=1;
			int begin=0;
			for(int i=1;i<n;i++)
			{
				if(arr[i]==arr[i-1])
				{
					continue;
				}
				if(Visit[arr[i]]==1)
				{
					flag=true;
					break;
				}
				Visit[arr[i]]=1;
			}
			
		}
		if(!flag)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;

	}
	return 0;
}