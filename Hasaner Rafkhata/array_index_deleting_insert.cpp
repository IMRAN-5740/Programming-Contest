#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int index;
	cin>>index;
	int temp=index;
	while(temp<n-1)
	{
		arr[temp]=arr[temp+1];
		temp++;
	}
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+n-1);
	for(int i=0;i<n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}