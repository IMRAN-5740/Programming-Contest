#include<stdio.h>
#include<math.h>
int main()
{

    long long int  t,n,a,b,c,d,i,sum=0;
    scanf("%lld",&t);
    if(t>=1 && t<=24)
    {

        for (i=0; i<t; i++)
        {
            scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
            sum=a+b+c+d;

            if(sum<=n)
            {
                if(sum>=70)
                {
                    printf("Yes\n");
                }

                else
                    printf("No\n");
            }
        }
    }
    return 0;
}
