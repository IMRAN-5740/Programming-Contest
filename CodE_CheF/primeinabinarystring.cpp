#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int cnt=0;
			string s;
			cin>>s;
			int z=0;
			int len=s.size();
			for(int i=0;i<len-1;i++)
			{
				if(s[i]=='1')
				{
					cout<<"YES"<<endl;
					z=1;
					break;
				}
			}
				if(z==0)
				{
					cout<<"NO"<<endl;
				}
	}
	
	return 0;
}