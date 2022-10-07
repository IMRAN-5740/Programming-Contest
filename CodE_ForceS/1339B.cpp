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
		sort(arr+1,arr+1+n);
		if(n%2==0)
		{
			int res=n/2;
			int j,k;
			j=1;
			k=n;
			while(res--)
			{
				cout<<arr[k]<<" "<<arr[j]<<" ";
				j++;
				k--;
			}
			cout<<endl;
		}
		else if (n%2==1)
		{
			int res=(n/2);
			int j,k;
			j=1;
			k=n;
			while(res--)
			{
					cout<<arr[k]<<" "<<arr[j]<<" ";
					j++;
					k--;
					
			}
			cout<<arr[(n/2)+1]<<endl;
			
		}
	}
	return 0;
}