#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int array[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>array[i];		
		}
	
		for(int j=0;j<n;j++)
		{
			if(array[j]%k==4)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
	  }
	return 0;
}