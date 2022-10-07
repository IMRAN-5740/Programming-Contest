#include<stdio.h>
int main()
{
    double a,b,c,m,n,o,p,q;
    scanf("%lf%lf%lf",&a,&b,&c);
    m=(.5*(a+b)*c);
    n=3.14159*c*c;
    o=(.5*a*c);
    p=b*b;
    q=a*b;
    printf("TRIANGULO: %.3lf\n",o);
    printf("CIRCULO: %.3lf\n",n);
    printf("TRAPEZIO: %.3lf\n",m);
    printf("QUADRADO: %.3lf\n",p);
    printf("RETANGULO: %.3lf\n",q);
    return 0;

}
