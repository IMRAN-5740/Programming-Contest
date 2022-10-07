#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double  n,r1,r2,r3,r4,result=0,result1=0;
    while (scanf("%lf%lf%lf%lf%lf",&n,&r1,&r2,&r3,&r4)!=EOF)
    {
        double k=pi*r1*r1/4;
        double l=pi*r2*r2/4;
        double m=pi*r3*r3/4;
        double s=pi*r4*r4/4;
        result=k+l+m+s;
        result1 =((n*n)-result);
        printf("%.3lf\n",result1);
    }
    return 0;
}
