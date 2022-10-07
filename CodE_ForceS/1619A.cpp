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
		int cnt=0;
		int len=s.size();
		int br=0;
		int mid=(len/2);
		if(len%2==0)
		{
			
			for(int i=0;i<len;i++)
			{
				if(s[i]==s[mid+i])
				{
					cnt++;
				}
				else
				{
					br++;
					break;
				}
			}
			if(cnt==(len/2))
			{
				cout<<"YES"<<endl;
			}
			else if(br==1)
			{
				cout<<"NO"<<endl;
			}
			else 
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}