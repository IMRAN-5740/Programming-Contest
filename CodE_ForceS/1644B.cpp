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
		int arr[n+5];
		int brr[n+5];
		for(int i=1;i<=n;i++)
		{
			arr[i]=i;
			brr[i]=i;
		}
		sort(arr+1,arr+1+n,greater<int>());
		sort(brr+1,brr+1+n,greater<int>());
		int temp=n;
		int j=1;
		int k=2;

		if(n%2==0)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			while(n>=2)
			{
				swap(arr[j],arr[j+1]);
				for(int i=1;i<=temp;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
				n--;
				j++;
			}
		}
		else
		{
			if(temp==3)
			{
				cout<<3<<" "<<2<<" "<<1<<endl;
				cout<<2<<" "<<3<<" "<<1<<endl;
				cout<<3<<" "<<1<<" "<<2<<endl;
			}
			else{
			for(int i=1;i<=n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			while(n-1>=2)
			{
				swap(arr[k],arr[k+1]);
				for(int i=1;i<=temp;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
				n--;
				k++;
			}
			swap(brr[temp-1],brr[temp]);
			for(int i=1;i<=temp;i++)
			{
				cout<<brr[i]<<" ";
			}
			cout<<endl;
		}
		}
	}
	return 0;
}