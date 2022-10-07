#include<bits/stdc++.h>
using namespace std;
const int N =1e2;
int arr[N];
int cnt;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];

		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=10 and arr[i]<=60)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}


	return 0;
}