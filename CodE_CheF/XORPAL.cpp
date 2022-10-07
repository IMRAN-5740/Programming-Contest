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
		string s;
		cin>>s;
		int len=s.size();
		int cnt=0;
		int zero=0;
		int one=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='0')
			{
				zero++;
			}
			if(s[i]=='1')
			{
				one++;
			}
		}
		if(n%2==0)
		{
			if(zero==one)
			{
				cout<<"YES"<<endl;
			}
			else if(zero%2==0 and one%2==0  )
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
//Si⊕S(N+1−i)  is the same for all 1≤i≤N.