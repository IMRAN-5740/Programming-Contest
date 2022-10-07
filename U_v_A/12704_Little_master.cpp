#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  t;
	cin>>t;
	double  x,y,r,Diameter,Distance,Shortest_value,Longest_value;
	while (t--)
	{
		cin>>x>>y>>r;
		//Diameter=2*r;

		Distance=sqrt((x*x)+(y*y));

		Shortest_value= r- Distance;

		Longest_value= r+ Distance;

		printf("%0.2f %0.2f\n", Shortest_value, Longest_value);
	}
	return 0;
}