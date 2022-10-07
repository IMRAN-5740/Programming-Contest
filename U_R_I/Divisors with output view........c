#include<stdio.h>
int main()
{
    int t,i,n,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int count=0;
        scanf("%d",&n);
        int array[n+1];

        printf("Case %d:",i);

        for(j=1; j<=n; j++)
        {
            if(n%j==0)
            {
                count++;
                array[count]=j;
                printf(" %d",array[count]);
            }
        }
        printf("\n");
    }
}
