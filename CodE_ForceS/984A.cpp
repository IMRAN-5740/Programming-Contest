#include<stdio.h>
int main()
{
    int n,i,j,round=0,k,mid;
    /* printf("Enter the number :");*/
    scanf("%d",&n);
    int array[n];
    /* printf("Enter the number of array without sorting :");*/
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    k=n-1;
    for (j=0; j<n; j++)
    {

        for (i=0; i<k-j; i++)

        {
            if(array[i]>array[i+1])
            {
                round=array[i];
                array[i]=array[i+1];
                array[i+1]=round;
            }
        }
    }
    mid=array[((i+n-1)/2)];

    printf("%d",mid);

    return 0;
}