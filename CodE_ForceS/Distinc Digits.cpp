#include<stdio.h>
int main()
{


    int l,r,sum=0;
    scanf("%d%d",&l,&r);
    for (int i=l; i<=r; i++)
    {
        l=l%10;
        r=r%10;
        if (l!=r)
        {
            sum=sum+l+r;
        }
    }
    printf("%d%d",l,r);
    return 0;
}
