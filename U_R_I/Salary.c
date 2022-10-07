#include<stdio.h>
int main()
{
    int a,b;
    double c,x;
    scanf("%d\n%d\n%lf\n",&a,&b,&c);
    x=b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",x);
    return 0;
}

