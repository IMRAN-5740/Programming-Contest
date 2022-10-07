#include<stdio.h>
int main()
{
    int x,y,i,j;
    printf("Enter the number of x:");
    scanf("%d",&x);
    printf("Enter the number of without reversing array :");
    int array[x];
    for (i=1; i<=x; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The result of reversing array:");

    for (j=x; j>0; j--)
    {
    printf("%d ",array[j]);
    }
    return 0;
}
