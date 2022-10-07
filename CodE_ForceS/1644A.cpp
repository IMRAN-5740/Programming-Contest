#include<bits/stdc++.h>
using namespace std;
int  cnt1,cnt2,cnt3;
int  rnt1,rnt2,rnt3;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='r')
			{
				cnt1=i+1;
			}
			else if(s[i]=='g')
			{
				cnt2=i+1;
			}
			else if(s[i]=='b')
			{
				cnt3=i+1;
			}
			else if(s[i]=='R')
			{
				rnt1=i+1;
			}
			else if(s[i]=='G')
			{
				rnt2=i+1;
			}
			else if(s[i]=='B')
			{
				rnt3=i+1;
			}
		}
		if(cnt1<rnt1 and cnt2<rnt2 and cnt3<rnt3)
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