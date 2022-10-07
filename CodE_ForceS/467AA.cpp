#include<bits/stdc++.h>
using namespace std;
int cnt;
int main()
{
	int n;
	cin >>n;
	while(n--)
	{
		int p,q;
		cin>>p>>q;
		if(p<=q and abs(p-q)==2 or abs(p-q)>=2 )
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}