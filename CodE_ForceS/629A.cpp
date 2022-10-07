#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			{
				cin>>s[i][j];
			}
	}
	int cnt;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cnt=0;
		for(int j=0;j<n;j++)
			{
				if(s[i][j]=='C')
				{
					cnt++;
				}
			}
			cnt--;
	cnt=cnt*(cnt+1)/2;
	ans+=cnt;
	}
	
	for(int i=0;i<n;i++)
	{
		cnt=0;
		for(int j=0;j<n;j++)
			{
				if(s[j][i]=='C')
				{
					cnt++;
				}
			}
			cnt--;
	cnt=cnt*(cnt+1)/2;
	ans+=cnt;
	}
	cout<<ans<<endl;
	return 0;
}