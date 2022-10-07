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
		int x=arr[1];
		for(int i=2;i<=n;i++)
		{
			x=(x& arr[i]); 
		}
		cout<<x<<endl;
	}
	return 0;
}