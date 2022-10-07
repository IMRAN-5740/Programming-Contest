#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1]={0};
	int p;
	cin>>p;
	for(int i=1;i<=p;i++)
	{
		int val;
		cin>>val;
		arr[val]++;
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int val;
		cin>>val;
		arr[val]++;
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==0)
		{
			cnt++;
		}
	}
	if(cnt==0)
	{
		cout<<"I become the guy."<<endl;
	}
	else
	{
		cout<<"Oh, my keyboard!"<<endl;
	}
	return 0;
}