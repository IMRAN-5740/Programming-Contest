#include<bits/stdc++.h>
using namespace std;
const int N =1e2;
int arr[N];
int cnt;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		float res1= (float)y1/x1;
		float res2=(float)y2/x2;
		if(res1>res2)
		{
			cout<<1<<endl;
		}	
		else if (res1<res2)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}


	return 0;
}