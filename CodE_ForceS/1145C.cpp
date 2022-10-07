#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==0)
	{
		cout<<15<<endl;
		
	}
	else
	{
		int arr[16]={0};
	int i=0;
	while(n>0)
	{
		arr[i]=n%2;
		
		n=n/2;
		i++;
	}
	
	// for(int j=0;j<4;j++)
	// {
	// 	cout<<arr[j];
	// }
	// cout<<endl;
	int brr[16]={0};
	int sum=0;
	i=0;
	for(int j=3;j>=0;j--)
	{
		if(arr[i]==1)
		{
			sum=sum+pow(2,j);
		}
		i++;
	}
	//cout<<sum<<endl;
	sum--;
	int k=0;
	while(sum>0)
	{
		brr[k]=sum%2;
		
		sum=sum/2;
		k++;
	}
	
	// for(int j=0;j<4;j++)
	// {
	// 	cout<<brr[j];
	// }

	// cout<<endl;
	int p=0;
	int res=0;
	for(int j=3;j>=0;j--)
	{
		if(brr[p]==1)
		{
			res=res+pow(2,j);
		}
		p++;
	}
	cout<<res<<endl;
	}
	

	return 0;
}
