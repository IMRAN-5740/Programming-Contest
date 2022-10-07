#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N =1e+5;
int Visit[N];
vector<int>vec[N];
int main()
{
	int n,m;
	cout<<"Enter the Number of Node and Edges:";
	cin>>n>>m;
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		//vec[y].push_back(x);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<i;
		for(int j=0;j<vec[i].size();j++)
		{
			cout<<"-->"<<vec[i][j];
		}
		cout<<endl;
	}

	return 0;
}