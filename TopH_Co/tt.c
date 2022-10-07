
#include<stdio.h>
#include<math.h>
//#define pi acos(-1)
int main()
{

    int t,i;
    scanf("%d",&t);
    double r,result=0;
    for (i=1; i<=t; i++)
    {
        scanf("%lf",&r);
        result = ((2*r*r)*(4-3.1416));
        printf("Case %d: %.2lf\n",i,result);
    }
    return 0;
}
