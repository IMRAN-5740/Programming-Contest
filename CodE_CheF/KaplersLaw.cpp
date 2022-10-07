#include<bits/stdc++.h>
using namespace std;
int main()

{
	int t;
	cin>>t;
	while(t--)
	{
		float t1,t2,r1,r2;
		cin>>t1>>t2>>r1>>r2;
		float res1,res2;
		res1=(t1*t1)/(r1*r1*r1);
		res2=(t2*t2)/(r2*r2*r2);
		if(res2==res1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}