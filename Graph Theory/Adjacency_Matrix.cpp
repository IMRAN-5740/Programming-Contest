#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int main()
{
	//freopen("adjacencymatrix.txt","r",stdin);
	int n,e;
	//cout<<"Enter the number of nodes and edges:"<<endl;
	cin>>n>>e;
	for(int i=0;i<e;i++)
	{
		int n1,n2;
		cin>>n1>>n2;
		arr[n1][n2]=1;
		arr[n2][n1]=1;//undirected Graph 

	}
	//neighbordeterminent

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1)
			{
				cout<<i<<"-->"<<j<<" ";
			}
			//cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//connected
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

/*
Input
5 6
0 1
0 2
1 2
1 3
1 4
3 4
*/
/*
Output
0 1 1 0 0
1 0 1 1 1
1 1 0 0 0
0 1 0 0 1
0 1 0 1 0
*/
