#include<stdio.h>
int main()
{
    int t,i,n,a,b;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        n=a+b;
        printf("Case %d: %d\n",i,n);
    }
    return 0;
}
