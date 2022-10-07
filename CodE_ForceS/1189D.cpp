#include <bits/stdc++.h>
using namespace std;
int n;
int deg[100000+5];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        {
        int u,v;
        scanf("%d%d",&u,&v);
        deg[u]++,deg[v]++;
        }
    for(int i=1;i<=n;i++)
        {
        if(deg[i]==2) 
        return 0*printf("NO\n");
        }
    printf("YES\n");
    return 0;
}