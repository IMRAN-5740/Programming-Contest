#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	int cnt=0;
	int cnt1=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='4')
		{
			cnt++;
		}
		else if(s[i]=='7')
		{
			cnt1++;
		}
	}
	int res=cnt+cnt1;
	if(res==4 or res==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}