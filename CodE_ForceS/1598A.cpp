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
		int cnt=0;
		char s[n+1];
		char s1[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>s1[i];
		}
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0' or s1[i]=='0')
			{
				cnt++;
			}
			
		}
		if(cnt>=n)
			{
				cout<<"YES"<<endl;
			}
			else
			cout<<"NO"<<endl;
	}


}