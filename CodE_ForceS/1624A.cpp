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
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int first=arr[0];
		int last=arr[n-1];
		int res=last-first;
		cout<<res<<endl;
	}
	return 0;
}