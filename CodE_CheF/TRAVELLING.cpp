#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define ll long long
#define pb push_back
#define vll vector<long long>
#define vc vector
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 

void dfs(ll vertex,bool visited[],vector<ll>* AdjList)
{ 
    
  visited[vertex]=1;
  
  for(auto i: AdjList[vertex])
    if(!visited[i])
       dfs(i,visited,AdjList);
       
}
int main()
{  
   IOS;tie;
   int t;
   cin>>t;
   while(t--)
   {
       ll n,m;
       cin>>n>>m;
       vll adj[n];
      while(m--)
      {
        ll x,y;
        cin>>x>>y;
        x--,y--; // 0 based indexing
        adj[x].push_back(y);
        adj[y].push_back(x);
      }
       bool vis[n];
       memset(vis,false,sizeof(vis));//00 kore neya
       dfs(0,vis,adj);
       ll count=0;
      while(!vis[n-1])
      {
          bool vis2[n];
          memset(vis2,false,sizeof(vis2));//00 kore neya
          f(i,0,n)
           if(vis[i])
           {
               if(i+1<n)
                dfs(i+1,vis2,adj);
               if(i-1>=0)
                dfs(i-1,vis2,adj);
           }
           f(i,0,n)
            vis[i]|=vis2[i];
         count++;
      }
      cout<<count<<endl;
     
   }
    return 0;
}