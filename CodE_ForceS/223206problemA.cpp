#include<bits/stdc++.h>
using namespace std;
int main()
{

    int A[7][7],i,j,x,y,ans=0;
    for (i = 1; i <= 5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (i = 1; i <=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if (A[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    ans=abs(x-3)+ abs(y-3);
    printf("%d\n",ans);
    return 0;
}

