#include<stdio.h>
#include<math.h>
int main()
{
    char s1[100];
    scanf("%s\n",&s1);
    double a,b,result;
    scanf("%lf\n%lf\n",&a,&b);
    double k=(b*15)/100;
    result=k+a;
   // printf("%s\n",s1);
    printf("TOTAL = R$ %.2lf\n",result);
    return 0;
}
