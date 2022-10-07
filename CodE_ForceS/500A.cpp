#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define MX 3000007
vector<ll>graph[MX];
bool vis[MX];

void dfs(ll node)
{
	vis[node]=true;
	for(ll i=0;i<graph[node].size();i++)

	{
		ll child=graph[node][i];
		if(vis[child]!=true)
		{
			dfs(child);
		}
	}

}

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n,t;cin>>n>>t;
		for(ll i=1;i<n;i++)
		{
			ll a;cin>>a;
			graph[i].push_back(i+a);
		}

		dfs(1);
		if(vis[t]==true)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}