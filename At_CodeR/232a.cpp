#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a,b;
	cin>>a>>b;
	a=a-1;
	b=b-1;
	char t;
	t=s[a];
	s[a]=s[b];
	s[b]=t;
	cout<<s<<endl;
	return 0;
}