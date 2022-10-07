#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t,n;
	cin>>t;
		while(t--)
	{
		int sum=0;
		cin>>n;
		while(n>0)
		{
		int last=n%10;
		sum=sum+last;
		n=n/10;
		}
		cout<<sum<<endl;
	}	
return 0;
}