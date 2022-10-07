#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int t;
int n;
int arr[N];
int cnt,cnt1;
int res;
int main()
{

	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				cnt=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(arr[i]==1)
			{
				cnt1=i;
				break;
			}
		}
		for(int j=cnt;j<=cnt1;j++)
		{
			if(arr[j]==0)
			{
				res++;
			}
		}
		cout<<res<<endl;
		res=0;
	}
	return 0;

}