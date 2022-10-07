#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,x=0,y=200,v,z;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(x<a[i])
        {
           x=a[i];
        }
        if(y>a[i])
        {
            y=a[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(x==a[i])
        {
          v=i;

        }
        if(y==a[i])
        {
            z=i;
        }

    }
    if(v<z)
        printf("%d %d\n",x,y);
    else
        printf("%d %d\n",y,x);
    x=0;
    y=200;
    }
    return 0;

}