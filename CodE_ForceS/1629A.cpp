#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,ans=0;
		cin>>n>>k;
		int arr[100000];
		int brr[100000];
		vector<pair<int,int>>p; 

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>brr[i];
			p.push_back(make_pair(arr[i],brr[i]));
		}
		sort(p.begin(),p.end());
		ans=k;
		
		for(int i=0;i<n;i++)
			{
				if(p[i].first<=ans)
				{
					ans=ans+p[i].second;
				}
				else if(p[i].first>ans)
				{
					break;
				}
			}
			cout<<ans<<endl;
	}
	return 0;
}