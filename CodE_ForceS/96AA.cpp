#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size();
	
	if(len<7)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		int cnt=0;
		int cnt1=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='0' and s[i+1]=='0' and s[i+2]=='0' and s[i+3]=='0' and s[i+4]=='0' and s[i+5]=='0' and s[i+6]=='0')
			{
				cnt++;
				
			}
			else if (s[i]=='1' and s[i+1]=='1' and s[i+2]=='1' and s[i+3]=='1' and s[i+4]=='1' and s[i+5]=='1' and s[i+6]=='1')
			{
				cnt1++;
			}
			
		}
		if(cnt>=1 or cnt1>=1)
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