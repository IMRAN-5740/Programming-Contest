#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int sum=0,i;
	//	sort(arr,arr+n);
		sort(arr,arr+n,greater<int>());
		bool cnt=false;
		
			for(i=0;i<n;i++)
			{
				sum+=arr[i];
				if(sum>=x)
				{
					cnt=true;
					break;
			}
				}
			if(cnt==true)
			{
				cout<<i+1<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}	
	}
	return 0;
}