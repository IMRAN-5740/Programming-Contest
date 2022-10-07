#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int arr[N];
queue<int>q;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        q.push(i);
    }
    map<int,int>mp;
    int pos=0,ans=0;
    while(!q.empty())
    {
        pos=q.front();
        ans=pos;
        if(mp[pos]+m>=arr[pos])
        {
            q.pop();
        }
        else
        {
            q.pop();
            mp[pos]=mp[pos]+m;
            q.push(pos);
        }
    }
    cout<<ans<<endl;
    return 0;
}