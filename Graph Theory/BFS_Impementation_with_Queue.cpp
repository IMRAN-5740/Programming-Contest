#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
#define WHITE 1
#define GRAY 2
#define BLACK 3
int start;
int node,edge;
int color[100];
int parent[100];
int Distance[100];
int adj_Matix[100][100];

void bfs(int startigNode)
{
	for(int i=0;i<node;i++)
	{
		color[i]=WHITE;
		parent[i]=-1;
		Distance[i]=INT_MIN;
	}
	Distance[startigNode]=0;
	parent[startigNode]=-1;

	queue<int>q;
	q.push(startigNode);
	while(!q.empty())
	{
		int x;
		x=q.front();
		q.pop();
		color[x]=GRAY;
		cout<<x<<" ";

		//some wrok
		for(int i=0;i<node;i++)
		{
			if(adj_Matix[x][i]==1)
			{
				if(color[i]==WHITE)
				{
					//x er neibours i
					// x hocce i er parent node
					Distance[i]=Distance[x]+1;
					parent[i]=x;
					q.push(i);

				}
			}
		}
		color[x]=BLACK;
	}
	
}

int main()
{
	cout<<"Enter the number of Node and Edges:"<<endl;
	cin>>node>>edge;
	cout<<"Enter the Starting Node"<<endl;
	cin>>start;
	for(int i=0;i<edge;i++)
	{
		int n1,n2;
		cin>>n1>>n2;
		adj_Matix[n1][n2]=1;
		adj_Matix[n2][n1]=1;
	}

	bfs(start);
	cout<<endl;
	cout<<parent[5]<<" "<<Distance[5]<<endl;
	return 0;
}

/*
8 7
0 1
0 2
1 3
2 4
2 5
3 6
3 7
*/
