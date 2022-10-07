#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=1e5;
vector<int>Graph[N];
int Visit[N];
int Distance[N];

void DFs_Calling(int node,int d)
{
	Visit[node]=1;
	Distance[node]=d;
	for(int i =0;i<Graph[node].size();i++)
	{
		int child=Graph[node][i];
		if(Visit[child]==0)
		{
			DFs_Calling(child,d+1);
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int e=n-1;
	while(e--)
	{
		int x,y;
		cin>>x>>y;
		Graph[x].push_back(y);
		Graph[y].push_back(x);
	}
	DFs_Calling(1,0);
	int q;
	int mn=INT_MAX;
	int ans=-1;
	cin>>q;
	while(q--)
	{
		int p;
		cin>>p;
		if(Distance[p]<mn)
		{
			mn=Distance[p];
			ans=p;
		}
		else if(Distance[p]==mn)
		{
			ans=min(ans,p);
		}
	}
	cout<<ans<<endl;
	return 0;
}