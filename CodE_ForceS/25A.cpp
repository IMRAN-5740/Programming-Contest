#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0,cnt1=0;
	int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%2==0)
			{
				cnt++;
			}
			else
			{
				cnt1++;
			}
		}
	
	if(cnt>cnt1)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2!=0)
			{
				cout<<(i+1)<<endl;
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			{
				cout<<(i+1)<<endl;
			}
		}
	}
	return 0;

}
