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
		char s[n];
		for(int i=0;i<n;i++)
		{
			if(i%3==0)
			{
				s[i]='a';
			}
			else if (i%3==1)
			{
				s[i]='b';
			}
			else if (i%3==2)
			{
				s[i]='c';
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}