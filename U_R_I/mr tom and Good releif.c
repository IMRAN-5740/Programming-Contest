#include<stdio.h>
int main()
{
    int t,i,n,j;
   // scanf("%d",&t);
    //for(i=1; i<=t; i++)
   // {
        int cnt=0;
        scanf("%d",&n);
        int array[n+1];

      // printf("Case %d:",i);
        for(j=1; j<=n; j++)
        {
            if(n%j==0)
            {
                cnt++;
                array[cnt]=j;
                printf("%d\n",array[cnt]);
               // printf("\n");
               // printf("%d",cnt);
            }
        }
       // printf("\n");

}
