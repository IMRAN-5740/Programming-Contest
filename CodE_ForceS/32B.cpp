#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	// for(int i=0;i<s.size()-2;i++)
	// {
		// if(s[i]=='.')
		// {
		// 	cout<<0;
		// 	if(s[i+1]=='-')
		// 	{
		// 		if(s[i+1]=='-')
		// 		{
		// 			cout<<2;
		// 		}
		// 		else if(s[i+1]=='.')
		// 			cout<<1;
		// 	}
		// 	else 
		// 	{
		// 		if(s[i+1]=='.')

		// 	}
		// }
	// 	if(s[i]=='.' and s.size()==1)
	// 	{
	// 		cout<<0;
	// 	}
	// 	else if(s[i]=='.' and s[i+1]=='-' and s[i+2]=='.')
	// 	{
	// 		cout<<01;
	// 		i+=3;

	// 	}
	// 	else if(s[i]=='-' and s[i+1]=='.' and s[i+2]=='.')
	// 	{
	// 		cout<<10;
	// 		i=i+3;
	// 	}
	// 	else if(s[i]=='.' and s[i+1]=='-' and s[i+2]=='-')
	// 	{
	// 		cout<<02;
	// 		i+=3;

	// 	}
	// 	else if(s[i]=='-' and s[i+1]=='-' and s[i+2]=='.')
	// 	{
	// 		cout<<20;
	// 		i=i+3;
	// 	}
	// 	//cout<<endl;
	// }
	// cout<<endl;
	for(int i=0;i<s.size();)
	{
		if(s[i]=='.')
		{
			cout<<0;
			i++;
		}
		else if(s[i]=='-' and s[i+1]=='-')
		{
			cout<<2;
			i=i+2;
		}
		else if(s[i]=='-' and s[i+1]=='.')
		{
			cout<<1;
			i=i+2;
		}
	}
	cout<<endl;
	return 0;
}