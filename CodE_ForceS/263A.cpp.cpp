#include<stdio.h>
int main()
{
    long long  n,i,a,b;
    scanf("%lld",&n);
    for (i=0; i<n; i++)
    {
        scanf("%lld%lld",&a,&b);
        if (a<b)
        {
            printf("Happy Alex\n");
            break;
        }
        else
        {
            printf("Poor Alex\n");
            break;
        }
    }
    return 0;
}
