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
	int t;
	cin>>t;
	while(t--)

	{
		cout<<"Enter the number of node and edge : ";
		cin>>node>>edge;
		for(int i =1;i<=node;i++)
		{
			vec[i].clear();
		}
		memset(Visit,0,sizeof(Visit)); 

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
		}
	return 0;
}


/*
//cycle
 	5 5
	 1 2
	 2 3
	 2 4
	 3 4
	 4 5


//Not cycle
	 5 4
	 1 2
	 2 3
	 2 4
	 4 5

*/
