#include<bits/stdc++.h>
#define ll long long
#define WHITE 1
#define GRAY 2
#define BLACK 3
int adj[100][100];
int color[100];
int n,e;
using namespace std;
void visitDFS(int x)
{
	color[x]=GRAY;
	for(int i=0;i<n;i++)
	{
		if(adj[x][i]==1)
		{
			if(color[i]==WHITE)
			{
				visitDFS(i);
			}
			
		}
		
	}
	color[x]=BLACK;
}
void dfs()
{
	for(int i=0;i<n;i++)
	{
		color[i]=WHITE;
	}
	for(int i=0;i<n;i++)
	{
		if(color[i]==WHITE)
		{
			visitDFS(i);
		}
	}
}

int main()
{
	freopen("adjacencymatrix.txt","r",stdin);
	
	//cout<<"Enter the number of nodes and edges"<<endl;
	cin>>n>>e;

	for(int i=0;i<e;i++)
	{
		
		int n1,n2;
		cin>>n1>>n2;
		adj[n1][n2]=1;
		adj[n2][n1]=1;
		
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(adj[i][j]==1)
			{
				cout<<i<<"-->"<<j<<" ";
			}
			//cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
//	dfs();
	// if(res==true)
	// {
	// 	cout<<"YES"<<endl;
	// }
	// else
	// {
	// 	cout<<"NO"<<endl;
	// }
	return 0;
}