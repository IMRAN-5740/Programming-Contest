//n Factorial 

#include<stdio.h>
int a[120];
int main()
{
    int i, temp,n,x,t;
    scanf("%d",&t);
    while(t--){

    scanf("%d",&n);
    if (n<=0)
    {
        int p;
        ss:
        scanf("%d",&p);
        if(p<=0)
            goto ss;
        int m=1;
        for (int i=1; i<=p; i++)
        {
            m=m*i;
        }
        printf("%d",m);
        return 0;
    }
    int c=0;
    a[0]=1;
    x=n;

    for(; n>=2; n--)
    {
        temp=0;
        for(i=0; i<=c; i++)
        {
            temp=temp+(a[i]*n);
            a[i]=temp%10;
            temp=temp/10;
        }
        while(temp>0)
        {
            a[++c]=temp%10;
            temp=temp/10;
        }
    }
//printf("%d!\n",x);
    for(i=c; i>=0; i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
    return 0;
}
