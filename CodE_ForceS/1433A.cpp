#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
//int arr[N];
int arr[]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
//int brr[N];
int brr[]={1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
int cnt;
int sum;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<36;i++)
		{
			if(arr[i]==n)
			{
				cnt=i;break;
			}
		}
		//cout<<cnt<<endl;
		for(int j=0;j<=cnt;j++)
		{
			sum=sum+brr[j];
		}

		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}