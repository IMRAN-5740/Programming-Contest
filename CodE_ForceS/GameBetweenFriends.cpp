#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int nitin,sobhagyo,ritik,satyarth;
		cin>>nitin>>sobhagyo>>ritik>>satyarth;
		if(nitin>=sobhagyo)
		{
			sobhagyo=sobhagyo+ritik;
		}
		else
		{
			nitin=nitin+ritik;
		}
		if(nitin>=sobhagyo)
		{
			sobhagyo=sobhagyo+satyarth;
		}
		else
		{
			nitin=nitin+satyarth;
		}
		if(nitin>=sobhagyo)
		{
			cout<<"N"<<endl;
		}
		else
		{
			cout<<"S"<<endl;
		}
	}
	return 0;

}