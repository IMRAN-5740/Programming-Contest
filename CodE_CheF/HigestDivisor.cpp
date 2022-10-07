#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[12]={0};
	int j=1;
	for(int i=1;i<=10;i++)
	{
		if(n%i==0)
		{
			arr[j]=i;
			j++;
		}
	}
	for(int i=1;i<=10;i++)
	{
		//cout<<arr[i]<<" ";
	}
	//cout<<endl;
	int res=0;
	sort(arr+1,arr+1+10);
	// for(j=1;j<=10;j++)
	// {
	// 	 res=max(1,arr[j]);
	// }
	cout<<arr[10]<<endl;
	return 0;

}