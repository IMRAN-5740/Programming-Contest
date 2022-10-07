#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	double h,l;
	cin>>h>>l;
	double res= ((l*l)-(h*h))/(2*h);
	printf("%.13lf\n",res);
	return 0;
}