#include<stdio.h>
#include<math.h>
int main()
{
    int s;
    scanf("%d",&s);
    int A[s][s],i,j,k=0,sum=0;
    for (i = 1; i <= s; i++)
    {
        for(j=1; j<=s; j++)
        {
            //printf("A[%d] [%d] =",i,j);
            scanf("%d",&A[i][j]);
        }
    }
  /*  for (i = 0; i < 3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i] [j]);
        }
        printf("\n");
    }*/
    for (i = 1; i <=s; i++)
    {
        for(j=1; j<=s; j++)
        {
            if(i==j)
            {
                sum = sum + A[i][j];
            }
        }
    }
    printf("The result of diagonal series : %d\n",sum);
    for (i = s; i >=1 ; i--)
    {
        for(j=s; j>=1; j--)
        {
            if(i+j==(s))
            {
                k= k + A[i][j];
            }
        }
    }
     printf("The result of diagonal series : %d\n",k);
     if(sum>k)
        {
     printf("%d",sum-k);
        }
     else
             printf("%d",k-sum);

    return 0;
}
