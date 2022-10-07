#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i==n-1)
        {
            break;
        }
        if(arr[i]<=arr[i+1])
        {
            x++;
        }
    }
    if(x==(n-1))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
