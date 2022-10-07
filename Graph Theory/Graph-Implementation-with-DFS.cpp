#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>vec[N];
int Visit[N];

void DFS_Traversing(int node)
{
	Visit[node]=1;
	cout<<node<<" ";
	for(int i=0;i<vec[node].size();i++)
	{
		int child=vec[node][i];
		if(Visit[child]==0)
		{
			DFS_Traversing(child);
		}
	}
}

int main()
{
	cout<<"Enter the number of Node and Edge:";
	int n,e;
	cin>>n>>e;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	cout<<"Enter the Starting Node in Graph:";
	int s;
	cin>>s;
	DFS_Traversing(s);
	return 0;
}