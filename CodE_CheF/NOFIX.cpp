#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for(int i=0;i<n;i++)
		{
			cin>>array[i];
		}
		int res=0;
		for(int i=0;i<n;i++)
		{
			int check=1+res+i;
			if(check==array[i])
			{
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}