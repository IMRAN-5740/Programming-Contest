#include<stdio.h>
#include<math.h>
int main()
{
    long long i,n,m,r,min,max;
    while(scanf("%lld",&n)!=EOF)
    {
        r=n%7;
        m=n/7;
        max=min=m*2;
        if(r==6)
            min++;
        if(r<=2)
            max=max+r;
        else
            max=max+2;
        printf("%lld %lld\n",min,max);
    }
    return 0;
}
