#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BlACK 3
int color[100];
int node,edge;
int adj[100][100];
int Time=1;
int stime[100];
int ftime[100];
int s;

using namespace std;
 stack<int>ans;
void visitDFS(int x)
{
	color[x]=GRAY;
	stime[x]=Time;
	Time++;
	for(int i=0;i<node;i++)
	{
		if(adj[x][i]==1)
		{
			if(color[i]==WHITE)
			{
				visitDFS(i);
			}
		}
	}
	color[x]=BlACK;
	ftime[x]=Time;
	Time++;
	ans.push(x);
}

void dfs(int s)
{
	for(int i=0;i<node;i++)
	{
		color[i]=WHITE;
	}
	// for(int i=0;i<node;i++)
	// {
	// 	if(color[i]==WHITE)
	// 	{
	// 		visitDFS(i);
	// 	}
	// }
	visitDFS(s);

}




int main()
{
	//freopen("adjacencymatrix.txt","r",stdin);
	cout<<"Enter the number of node and edge:"<<endl;
	cin>>node>>edge;
	
	cout<<"Enter the starting node that i want to start:"<<endl;
	cin>>s;
	for(int i=0;i<edge;i++)
	{
		int n1,n2;
		cin>>n1>>n2;
		adj[n1][n2]=1;
		//adj[n2][n1]=1;
	}

	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			if(adj[i][j]==1)
			{
				cout<<i<<"-->"<<j<<" ";
			}
		}
		cout<<"\n";
	}

	dfs( s);
	cout<<endl;
	for(int i=0;i<node;i++)
	{
		cout<<"Node :"<<(char)('A'+i)<<" "<<stime[i]<<" "<<ftime[i]<<endl;   
	}
	cout<<"After Topological Sort :"<<endl;
	while(!ans.empty())
	{
		int res=ans.top();
		cout<<res<<" ";
		ans.pop();
	}
	cout<<endl;
	return 0;
}
