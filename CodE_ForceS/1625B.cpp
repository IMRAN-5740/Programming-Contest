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
		map<int,int> mp;
		int mx=-1;
		for(int i=1;i<=n;i++)
		{
			if(mp[arr[i]]==0)
			{
				mp[arr[i]]=i;
			}
			else
			{
				int a=i;
				int b=mp[arr[i]];
				int res=n-(a-b);
				mx=max(mx,res);
				mp[arr[i]]=i;
			}
		}
		cout<<mx<<endl;
	}
	return 0;
}