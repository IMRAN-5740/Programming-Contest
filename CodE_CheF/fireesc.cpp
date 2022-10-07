#include<bits/stdc++.h>
using  namespace  std;
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define nl      '\n'
#define mod 1000000007
#define ll long long int

ll result=0;
ll visit[100001];
vector<int>v[100001];
void dfs(int node)
{
	visit[node]=1;
	result++;
	for(ll i=0;i<v[node].size();i++)
	{
		ll child=v[node][i];
		if(visit[child]==0)
		{
			dfs(child);
		}
	}
}
int main()
{
	faster;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		for(ll i=1;i<=n;i++)
			v[i].clear();
		memset(visit,0,sizeof(visit));
		while(m--)
		{
			ll x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		ll i,cnt=0,ans=1;
		for(i=1;i<=n;i++)
		{
			result=0;
			if(visit[i]==0)
			{
				cnt++;
				dfs(i);
				ans=(ans*result)%mod;
			}
		}
		cout<<cnt<<" "<<ans<<endl;
	}
	return 0;
}