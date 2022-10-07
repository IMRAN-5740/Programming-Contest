#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
int cnt;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=1;i<=n;i++)
	{
		
		int pos=arr[k];
		if(arr[i]>=pos and arr[i]!=0)
		{
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
	return 0;
}