#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n,i,sum=0;
    scanf("%llu",&n);

    unsigned long long arr[n];
    arr[0]=0;
    arr[1]=1;
    for (i=2; i<=n; i++)
    {
        arr[i]= arr[i-1]+ arr[i-2];
    }
   for (i=0; i<n; i++)
   {
       printf("%llu ",arr[i]);
    }
   printf("\n");
    // for(i=0; i<n; i++)
    // {
    //     sum=sum+arr[i];
    // }
  //  printf("%llu\n",sum);

    //printf("%d",arr[n]);
    return 0;

}
