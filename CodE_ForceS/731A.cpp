#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	cin>>s;
	int x=s[0]-'a';
	int y=26-x;
	int sum=0;
	sum=min(x,y);
	for(int i=1;i<s.size();i++)
	{
		x=abs(s[i]-s[i-1]);
		y=abs(26-x);
		sum=sum+min(y,x);
	}
	cout<<sum<<endl;
	return 0;
}