#include<stdio.h>
int main()
{
    long long  i,n,k,t;
    scanf("%lld",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&k);
        if (n>=k)
        {
            printf("Case %lld: Alice\n",i);
        }
        else
            printf("Case %lld: Bob\n",i);
    }
    return 0;
}
