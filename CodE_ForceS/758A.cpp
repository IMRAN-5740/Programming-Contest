#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,large,ans=0;
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    large = array[0];
    for(i=0; i<n; i++)
    {
        if(large<array[i])
            large=array[i];
    }
    for(i=0; i<n; i++)
    {
        ans=ans+large-array[i];
    }
    printf("%d\n",ans);
    return 0;
}