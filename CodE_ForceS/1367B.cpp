#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n+5],c=0,o=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; i+=2) 
		{
			if (arr[i]%2!=i%2)
			{
				c++;
			}
		}
		for (int i = 1; i < n; i+=2) 
		{
			if (arr[i]%2!=i%2)
			{
				o++;
			}
		}
		if(c==o)
		{
			cout<<c<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
		c=0,o=0;
	}
	return 0;
}