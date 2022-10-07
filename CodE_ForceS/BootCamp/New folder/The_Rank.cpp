#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t+1];
	//vector<int>vec(t);
	int sum=0;
	int a,b,c,d;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b>>c>>d;
		sum=a+b+c+d;
		arr[i]=sum;
		//vec[i]=sum;
	}
	int res=arr[1];
	int temp=0;
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=t-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int cnt=0;
	for(int i=1;i<=t;i++)
	{
		if(res==arr[i])
		{
			cnt=i;
			break;
		}
	}
	//sort(arr+1,arr+t+1);
	//sort(vec.begin(),vec.end());
	//reverse(vec.begin(),vec.end());

	//vector<int > vec(arr+1,arr+t+1);
	// for(int i=1;i<=t;i++)
	// {
	// 	cout<<arr[i]<<" ";
	
	// }
	// cout<<endl;
	cout<<cnt<<endl;

	return 0;
}

