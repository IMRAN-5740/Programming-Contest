#include<stdio.h>
#include<math.h>
int main()
{
    long long t,n,result;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        int k=(n*2)-2;
        if (n%2==0)
        {
            n=n*2;
            printf("%lld\n",n);
        }
        else
            printf("%lld\n",k);
    }
    return 0;
}
