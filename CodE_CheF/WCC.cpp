#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
{
	int x;
	cin>>x;
	string s;
	cin>>s;
	int Charles=0;
	int Chef=0;
	int Draw=0;
	int len=s.size();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='C')
		{
			Charles++;
		}
		if(s[i]=='N')
		{
			Chef++;
		}
		if(s[i]=='D')
		{
			Draw++;
		}
	}
	int Charles_Point=(Charles*2)+Draw;
	int Chef_Point=(Chef*2)+Draw;
	if(Charles_Point>Chef_Point)
	{
		cout<<(x*60)<<endl;
	}
	else if(Chef_Point>Charles_Point)
	{
		cout<<(x*40)<<endl;
	}
	else
	{
		cout<<(x*55)<<endl;
	}
}

	return 0;
}