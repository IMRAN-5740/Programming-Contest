#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int j,h;
        char k[10][100];
        int m[10];

        for(j=0; j<10; j++)
            scanf("%s%d",k[j],&m[j]);
        for(j=h=0; j<10; j++)
            if(m[j]>h)
                h=m[j];
        printf("Case #%d:\n",i);
        for(j=0; j<10; j++)
            if(m[j]==h)
                printf("%s\n",k[j]);
    }
    return 0;
}
