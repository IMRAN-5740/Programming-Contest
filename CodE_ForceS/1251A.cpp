#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string s1;
	cin >>s1;
	sort(all(s1));
	cout<<s1<<endl;
	}
	return 0;
}
