#include<stdio.h>
#include<math.h>
int main()
{

    long long int  t,n,a,b,c,d,i,sum=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
        sum=a+b+c+d;
        if (sum>=((n+1)/2)+1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
