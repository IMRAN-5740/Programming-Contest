#include<stdio.h>
int i,n;
main()
{
    for(scanf("%d",&n); i++<n; printf(i<n?"that ":"it"))
        printf(i%2?"I hate ":"I love ");
}
/*#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(i<n?"that ":"it");
    }
    printf(i%2?"I hate ":"I love ");
}*/
