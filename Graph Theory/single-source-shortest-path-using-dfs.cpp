#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>vec[N];
int Visit[N];
int Distance[N];
void DFS_Call(int node,int d)
{
	Visit[node]=1;
	Distance[node]=d;
	for(int i=0;i<vec[node].size();i++)
	{
		int child=vec[node][i];
		if(Visit[child]==0)
		{
			DFS_Call(child,d+1);
		}
	}
}
int main()
{
	int n,e;
	cout<<"Enter the number of node and edges:";
	cin>>n>>e;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	int x;
	cout<<"Enter the Source :";
	cin>>x;
	DFS_Call(x,0);
	for(int i=1;i<=n;i++)
	{
		cout<<x<<"->"<<i<<" : "<<Distance[i]<<endl;
	}

	return 0;
}

/*
Input:
7 6
1 2
1 3
2 4
2 5
3 6
3 7
*/
