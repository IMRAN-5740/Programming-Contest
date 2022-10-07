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
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		map<int,int >mp;
		for(int i=0;i<n;i++)
		{
			int x=arr[i];
			while(x>n)
			{
				x=x/2;
			}
			while(mp[x]==1)
			{
				x=x/2;
			}
			if(x>0)
			{
				mp[x]=1;
			}
		}
		map<int,int>::iterator it;

		// for(it=mp.begin();it!=mp.end();it++)
		// {
		// 	cout<<(*it).first <<" "; 
		// }
		// cout<<"\n";
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			if(mp[i]==0)
			{
				ans=1;
				break;
			}
		}
		if(ans==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}