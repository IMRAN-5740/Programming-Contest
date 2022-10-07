#include<bits/stdc++.h>
using namespace std;
int pos1;
int pos2;
int main()

{
	int n=5;
	int arr[6][6];
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(arr[i][j]==1)
			{
				pos1=i;
				pos2=j;
				break;
			}
		}
	}

	int res=abs(pos1-3)+abs(pos2-3);
	cout<<res<<endl;
	
	return 0;
}