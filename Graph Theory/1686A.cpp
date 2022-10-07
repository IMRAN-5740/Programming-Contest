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
		float arr[n+1];
		float sum=0;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		float mean=0;
		bool cnt=false;
		int rnt=0;
		float val=0;
		for(int i=1;i<=n-1;i++)
		{
			for(int j=2;j<=n;j++)
			{
				if(arr[i]!=arr[j])
				{
					rnt=1;
					break;
				}
			}
		}
		if(rnt==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
				for(int i=1;i<=n;i++)
				{
					 val= sum-arr[i];
					mean=val/(n-1);
					if(mean==arr[i])
					{
						cnt=true;
						break;
					}
				}
				if(cnt==true)
				{
					cout<<"YES"<<endl;
				}
				else
					cout<<"NO"<<endl;
		}
		sum=0;
		val=0;

	}
	return 0;
}