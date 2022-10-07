#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==1)
		{
			cnt=1;

			break;
		}
	}
	if(cnt==1)
		{
			cout<<"HARD"<<endl;
		}
		else
		{
			cout<<"EASY"<<endl;
		}
	return 0;

}