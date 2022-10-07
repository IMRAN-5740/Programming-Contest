#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int cura=a;
	int curb=0;
	// while(cura--)
	// {
	// 	curb+=cura;
	// }
	// while(cura>1)
	// {
	// 	cura=curb/b;
	// 	cura=curb%b;
	// }
	// cout<<cura<<endl;
	int res=((a*b)-1)/(b-1);
	cout<<res<<endl;

	return 0;
}