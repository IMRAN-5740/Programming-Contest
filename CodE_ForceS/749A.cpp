#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int n;
	cin>>n;
	int cnt=0;
	if(n==2)
	{
		cout<<1<<endl;
		cout<<2<<endl;
	}
	else if(n==3)
	{
		cout<<1<<endl;
		cout<<3<<endl;
	}
	else
	{
		int temp=n-2;
		if(temp%2==1)
		{
			 cnt++;
			int res=temp/2;
			if(res==1)
			{
				cnt++;
				cout<<cnt<<endl;
				cout<<2<<" "<<n-2<<endl;
			}
			else if(res>1)
			{
				cout<<(cnt+res)<<endl;
				cout<<2<<" ";
				for(int i=1;i<res;i++)
				{
					cout<<2<<" ";
				}
				cout<<3<<endl;
			}
		}
		else
		{
			cnt++;
			int res=temp/2;
			cout<<(cnt+res)<<endl;
			cout<<2<<" ";
			for(int i =1;i<=res;i++)
			{
				cout<<2<<" ";
			}
		}

	}
	return 0;
}