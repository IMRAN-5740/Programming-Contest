#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1000];
int in[1000];
int out[1000];
int xx=1;
int Visit[1000];
void dfs(int node)
{
	Visit[node]=1;
	in[node]=xx++;
	for(int i=0;i<vec[node].size();i++)
	{
		int child=vec[node][i];
		if(Visit[child]==0)
		{
			dfs(child);
		}
	}
	out[node]=xx++;
}
int main()
{
	int node,edge;
	cout<<"Enter the number of node and edge: ";
	cin>>node>>edge;
	while(edge--)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	int s;
	cout<<"Enter the starting Node:";
	cin>>s;
	dfs(s);
	for(int i=1;i<=node;i++)
	{
		cout<<"Node: "<<i<<endl;
		cout<<"In Time :"<<in[i]<<endl;
		cout<<"Out Time :"<<out[i]<<endl;
	}
	return 0;
}