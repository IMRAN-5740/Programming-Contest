#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,r,min=0,max=0;
    long long   arr[5];
    for (i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
    }
    int k=4;
    for(j=0;j<5;j++)
    {
        for (i=0;i<k-j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                r=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=r;
            }
        }
    }
    /*for(i=0;i<5;i++)
    {
        printf("%lld ",arr[i]);
    }
    printf("\n");*/
    for(i=0;i<4;i++)
        {
            min=min+arr[i];
        }
        for(i=1;i<5;i++)
        {
            max=max+arr[i];
        }
        printf("%lld %lld\n",min,max);

    return 0;
}