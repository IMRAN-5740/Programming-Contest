#include<bits/stdc++.h>
using namespace std;
vector<int>V;
queue<int>Q;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		V.push_back(x);
		Q.push(i);
	}
	map<int,int>mp;
	int ans=0;
	int z=0;
	while(!Q.empty())
	{
		 z=Q.front();
		 ans=z+1;
		if(mp[z]+m>=V[z])
		{
			Q.pop();
		}
		else
		{
			Q.pop();
			mp[z]=mp[z]+m;
			Q.push(z);
		}
	}
	cout<<ans<<endl;
	return 0;
} 