#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=0;
		cin>>n;
		if(n==1|| n==0)
		{
			cout<<"no"<<endl;
			

		}
			else
			{

				for (int i=2;i<n;i++)
				{
					if(n%i==0)
					{
						cnt++;
					}
				}
				if(cnt>0)
				{
					cout<<"no"<<endl;
				}else
				{
					cout<<"yes"<<endl;
				}
			}
		
	}
	return 0;

}