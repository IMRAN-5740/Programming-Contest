#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if (z<abs(x-y)||z==0)
	{
		if(x>y)
		{
			cout<<"+";
		}
		else if(y>x)
		{
			cout<<"-";
		}
		else
			cout<<"0";
	}
	else
		cout<<"?";
	return 0;
}