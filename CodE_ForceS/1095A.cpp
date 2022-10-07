#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
		i=i+cnt;
		cnt++;
	}
	cout<<endl;
	return 0;
}