#include<bits/stdc++.h>
#define ll long long
const int N =1e5;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int cnt=0;
		int rnt=0;
		cin>>n;
		string s,r;
		cin>>s;
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<s[i];
		// }
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else if(n==2 and ((s[0]=='0' and s[1]=='1')or (s[0]=='1' and s[1]=='0')))
		{
			cout<<"YES"<<endl;
		}
		else if(n==2 and ((s[0]=='1' and s[1]=='1') or (s[0]=='0' and s[1]=='0')))
		{
			cout<<"NO"<<endl;
		}
		else if (n>=3)
		{
			for(int i=0,j=n-1;i<n,j>=0;i++,j--)
			{
				if(s[i]!=s[j])
				{
					cnt=1;
					break;
				}
			}
			if(cnt==0)
			{
				cout<<"NO"<<endl;

			}
			else
			 //if(cnt==0)
				{
					for(int i=1,j=n-1;i<n,j>=1;i++,j--)
					{
						if(s[i]!=s[j])
						{
							rnt=1;
							break;
						}
					}
					if(rnt==0)
					{
						cout<<"NO"<<endl;
					}
					else
					{
						cout<<"NO"<<endl;
					}
				}
		}
	}
	return 0;
}