#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string s[n];
	string t[m];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}

	for(int j=0;j<m;j++)
	{
		cin>>t[j];
	}

cout<<"YES"<<endl;
int j=1;
	for(int i=1;i<n-1;i++)
	{
		if(s[i]==t[j])
		{
			cout<<"YES"<<endl;
			j++;

		}
		else
		{
			cout<<"NO"<<endl;

		}
	}
	cout<<"YES"<<endl;
	

	return 0;
}