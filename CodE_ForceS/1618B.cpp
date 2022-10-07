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
		string s[n+5];
		for(int i=0;i<n-2;i++)
		{
			cin>>s[i];
		}
		string ans;
		ans=s[0];
		int cnt=0;
		for(int i=1;i<n-2;i++)
		{
			int pos=ans.size()-1;
			if(ans[pos]==s[i][0])
			{
				ans=ans+s[i][1];
			}
			else
			{
				cnt=1;
				ans=ans+s[i];
			}
			//cout<<ans<<endl;
		}
		if(cnt==0)
		{
			ans=ans+'a';
		}
		cout<<ans<<endl;
	}
}