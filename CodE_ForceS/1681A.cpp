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
		int arr[n];
		int max1=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			max1=max(max1,arr[i]);
		}
		int m;
		cin>>m;
		int brr[m];
		int max2=0;
		for(int j=0;j<m;j++)
		{
			cin>>brr[j];
			max2=max(max2,brr[j]);

		}

		int cnt=0,pos=0;
		if(max2>max1)
		{
			cout<<"Bob"<<endl;
			cout<<"Bob"<<endl;
		}
		if(max2<max1)
		{
			cout<<"Alice"<<endl;
			cout<<"Alice"<<endl;
		}
		if(max2==max1)
		{
			cout<<"Alice"<<endl;
			cout<<"Bob"<<endl;
		}

	}
	return 0;
}