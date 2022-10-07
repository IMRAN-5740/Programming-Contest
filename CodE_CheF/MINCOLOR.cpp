#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int  N,M;
void solve()
{
	cin>>N>>M;
	vector<vector<int>>arr(N,vector<int>(M));
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	arr[x1-1][y1-1]=1;
	arr[x2-1][y2-1]=2;
	auto brr=arr;

	set<int>ss;
	for(int i=1;i<=100;i++)
	{
		ss.insert(i); 
	}
	queue<>q;/////
	q.push({x1-1,y1-1});
	q.push({x2-1,y2-1});
	while(!q.empty())
	{
		auto p=q.front();
		q.pop();
		if(p.first+1<N and arr[p.first+1][p.second]==0)
		{
			for(auto it : ss)
			{
				pos[arr]
			}
		}
	}

}
signed main()
{
	int t;
	cin>>t;
	while(t--)

	{
		solve();
	}
	return 0;
}