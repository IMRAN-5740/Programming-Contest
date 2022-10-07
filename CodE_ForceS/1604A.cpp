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
		int res=0;
		int cnt=0;
		int arr[n+3];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]>cnt)
			{
				cnt++;
				res=res+(arr[i]-cnt);
				cnt=cnt+(arr[i]-cnt);
			}
			else
			{
				cnt++;
			}
		}
		cout<<res<<endl;
	}
	

	return 0;
}