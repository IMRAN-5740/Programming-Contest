#include<bits/stdc++.h>
using namespace std;
int main()

{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int array[n+3];
		for(int i=1;i<=n;i++)
		{
			cin>>array[i];
		}
		int j=1;
		while(q--)
		{
			while(j<n and array[j]==0)
			{
				j++;
			}
			if(j>=n)
				break;
			array[n]++;
			array[j]--;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}