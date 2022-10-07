#include<bits/stdc++.h>

int main()
{
    int t;
    double n,sum=0,avg=0;
    scanf("%d",&t);
    for (int i=1; i<=t; i++)
    {
        scanf("%lf",& n);
        sum=sum+n;
        avg=sum/t;
    }
    printf("%.12lf\n",avg);
    return 0;
}
