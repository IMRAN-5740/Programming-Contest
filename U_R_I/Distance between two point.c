#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    double a,b,x,y,m,p,k;
    scanf("%lf%lf\n",&a,&b);
    scanf("%lf%lf",&x,&y);
    m=(x-a)*(x-a);
    p=(y-b)*(y-b);
     k=sqrt(m+p);
    printf("%.4lf\n",k);
    return 0;
    getch();
}
