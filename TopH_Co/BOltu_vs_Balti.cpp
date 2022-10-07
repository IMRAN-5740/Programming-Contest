#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long N,M,X,Y;
    while(scanf("%llu %llu",&N,&M)!=EOF)
    {
        unsigned long long sum=0,i;
        for (i=N;i<=M;i++)
        {
           sum=sum+i;
        }
        printf("Sum of %llu to %llu is -> %llu; \n",N,M,sum);
    }
return 0;
}

