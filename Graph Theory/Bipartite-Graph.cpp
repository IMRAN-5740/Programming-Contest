#include<bits/stdc++.h>
#define ll long long
const int N =1e5;
using namespace std;
vector<int> Graph[N];
int Visit[N];
int Color[N];
bool DFS_Call(int Node,int c)
{
	Visit[Node]=1;
	Color[Node]=c;
	for(int i=0;i<Graph[Node].size();i++)
	{
		int Child=Graph[Node][i];
		if(Visit[Child]==0)
		{
			if(DFS_Call(Child,c^1)==false)
			{
				return false;
			}
		}
		else
		{
			if(Color[Node]==Color[Child])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{

	int n,e;
	cout<<"Enter the Number  of Node and Edge :"<<endl;
	cin>>n>>e;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		Graph[x].push_back(y);
		Graph[y].push_back(x);
	}
	int s;
	cout<<"Starting Node: "<<endl;
	cin>>s;
	bool ans= DFS_Call(s,1);
	if(ans==true)
	{
		cout<<"The Graph is a Bipartite Graph."<<endl;
	}
	else
	{
		cout<<"The Graph is not a Bipartite Graph"<<endl;
	}
	return 0;
}