#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.size();
		int cnt=0;
		int ans=0;
		for(int i=0;i<len;i++)
		{
			if(s[0]!=s[i] and s[i]!=s[len-1])
			{
				cnt++;
			}
			else
			{
				cnt=0; 

			}
			ans=max(ans,cnt);
		}
		if(ans==0)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}

	}
	return 0;
}