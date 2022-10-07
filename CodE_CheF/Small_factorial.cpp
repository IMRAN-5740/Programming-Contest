#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,fact=1,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("%d\n",fact);
        fact=1;
    }
    return 0;
}
