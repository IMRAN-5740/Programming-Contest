#include<stdio.h>
#include<math.h>

int main()
{
    long long  i,n,a,b,c;
   double s=0,area=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if((a+b)>c && (b+c)>a && (c+a)>b)
        {
            s=(double)(a+b+c)/2;
            area=(sqrt)(s*(s-a)*(s-b)*(s-c));
            printf("%.2lf\n",area);
        }
        else
        {
            printf("“Oh, No!”");
        }
    }
    return 0;
}
