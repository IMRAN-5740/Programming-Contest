#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e,p;
		cin>>a>>b>>c>>d>>e>>p;
		int arr[6];
		arr[1]=a*p;
		arr[2]=b*p;
		arr[3]=c*p;
		arr[4]=d*p;
		arr[5]=e*p;
		int sum=0;
		for(int i=1;i<=5;i++)
		{
			sum+=arr[i];
		}
		if(sum<=120)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}