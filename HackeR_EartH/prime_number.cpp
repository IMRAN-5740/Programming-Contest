#include<stdio.h>
int prime(int num)
{
    int j;
    for(j=2; j<num; j++)
    {
        if (num%j==0)
            return (-99);
    }
    if(j==num)
    return (num);
}
int main()
{
    int n,i,temp;
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        temp=prime(i);
        if(temp==-99)
            continue;
        else
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}