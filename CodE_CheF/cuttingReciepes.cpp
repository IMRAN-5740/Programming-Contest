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
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	int x=arr[1];
	for(int i=1;i<=n;i++)
	{
		x=__gcd(x,arr[i]);
	}
	for(int i=1;i<=n;i++)
		{
			arr[i]=arr[i]/x;
		}
		for(int i =1;i<=n;i++)
		{
			cout<<arr[i]<<" ";
		}
	cout<<"\n";
		
	// for(int i=1;i<=n;i++)
	// {
	// 	x=min(x,arr[i]);
	// }
	// if(x>1)
	// {
	// 	for(int i=1;i<=n;i++)
	// 	{
	// 		if(arr[i]%x==0)
	// 		{
	// 			cnt++;
	// 		}
	// 	}
	// 	if(cnt==n)
	// 	{
	// 		for(int i=1;i<=n;i++)
	// 		{
	// 			arr[i]=arr[i]/x;
	// 		}
	// 		for(int i =1;i<=n;i++)
	// 		{
	// 			cout<<arr[i]<<" ";
	// 		}
	// 		cout<<"\n";
	// 	}
	// }
	// else
	// int cnt1=0;
	// for(int i=1;i<=n;i++)
	// {
	// 	int a=abs(arr[i]-arr[i+1]);
	// 	int b=abs(arr[i+1]-arr[i+2]);
	// 	if(a==1 and b==1)
	// 	{
	// 		cnt1=1;
	// 		break;
	// 	}
	// }
	// if(cnt1==1)
	// {
	// 	for(int i=1;i<=n;i++)
	// 	{
	// 		cout<<arr[i]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	}
	
	return 0;
}