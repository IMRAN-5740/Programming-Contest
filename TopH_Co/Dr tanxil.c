#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    long long t,i,n;
    double res;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        res=pi*(n*n);
        printf("%lf\n",res);
    }
    return 0;
}
