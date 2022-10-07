#include<stdio.h>
int main()
{
    int x,y;
    double res;
    scanf("%d%d",&x,&y);
    if(x==1)
    {
        res=4.00*y;
        printf("Total: R$ %.2lf\n",res);
    }
    else if (x==2)
    {
        res=4.50*y;
        printf("Total: R$ %.2lf\n",res);
    }
    else if(x==3)
    {
        res=5.00*y;
        printf("Total: R$ %.2lf\n",res);
    }
    else if (x==4)
    {
        res=2.00*y;
        printf("Total: R$ %.2lf\n",res);
    }
    else if (x==5)
    {
        res=1.50*y;
        printf("Total: R$ %.2lf\n",res);
    }
    return 0;
}
