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
		int arr[n+3];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int ind=n+1;
		int value=0;
		for(int i=1;i<=n;i++)
		{
			if(arr[i]!=i)
			{
				ind=i;
				value=i;
				break;
			}
		}
		vector<int>vec;
		for(int i=1;i<ind;i++)
		{
			vec.push_back(arr[i]);
		}
		for(int i=ind;i<=n;i++)
		{
			if(arr[i]==value)
			{
				for(int j=i;j>=ind;j--)
				{
					vec.push_back(arr[j]);
				}
				for(int j=i+1;j<=n;j++)
				{
					vec.push_back(arr[j]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}