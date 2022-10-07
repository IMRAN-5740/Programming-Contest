#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,cnt,m,k;
    double l,sum=0;
    scanf("%d",&t);
    for (i=1; i<=t; i++)
    {
        scanf("%d",&n);
        cnt=n%10;
        n=n/10;
        //k=cnt;
        //printf("%d\n",cnt);
        //printf("%d\n",m);
        l=pow(n,cnt);
        sum=sum+l;
    }
    printf("%.0lf\n",sum);
    return 0;
}
