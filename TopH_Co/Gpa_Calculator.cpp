#include<stdio.h>
int main()
{
    int t,pos,i;
    double n,sum,p;
    scanf("%d",&t);
    for (pos=1; pos<=t; pos++)
    {
        scanf("%lf",&n);
        sum=0;
        for (i=1; i<=n; i++)
        {
            scanf("%lf",&p);
            sum+=p;
        }
        printf("Case %d: %0.3lf\n",pos,sum/n);
    }
    return 0;

}
