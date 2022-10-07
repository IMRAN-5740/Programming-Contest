#include<bits/stdc++.h>
using namespace std;
const int N=200;
int Visit[N];
vector<int>vec[N];

void DFs_Calling(int node)
{
	Visit[node]=1;
	cout<<node<<" ";
	for(int i=0;i<vec[node].size();i++)
	{
		int child=vec[node][i];
		if(Visit[child]==0)
		{
			DFs_Calling(child);
		}
	}
}
int main()
{
	int n,e;
	int cnt=0;
	cout<<"Enter the number of node and edges:"<<endl;
	cin>>n>>e;
	cout<<"Enter the edges:"<<endl;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for(int v=0;v<n;v++)
	{
		if(Visit[v]==0)
		{
			DFs_Calling(v);
			cnt++;
			cout<<endl;
		}
	}
	cout<<cnt<<endl;
	return 0;
}