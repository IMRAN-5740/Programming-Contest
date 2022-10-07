#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1000];
int Visit[1000];

bool dfs(int node,int par)
{
	Visit[node]=1;
	for(int i=0;i<vec[node].size();i++)
	{
		int child=vec[node][i];
		if(Visit[child]==0)
		{
			if(dfs(child,node)==true)
			{
				return true;
			}
		}
		else
		{
			if(child!=par)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
			
			int node,edge;
			cout<<"Enter the number of node and edge : ";
			cin>>node>>edge;
			while(edge--)
			{
				int x,y;
				cin>>x>>y;
				vec[x].push_back(y);
				vec[y].push_back(x);
			}
			bool flag =dfs(1,-1);
			if(flag==true)
			{
				cout<<"Cycle is Here"<<endl;
			}
			else
			{
				cout<<"Cycle is not Here"<<endl;
			}
	return 0;
}