#include<stdio.h>
int main()
{
    int n,i,a[12]= {4,7,47,74,447,474,477,774,747,744,777,444},cnt=0;
    scanf("%d",&n);
    for(i=0; i<12; i++)
    {
        if(n==a[i]||n%a[i]==0)
        {
            printf("YES\n");
            break;
        }
        else
            cnt++;
    }
    if(cnt==12)
        printf("NO\n");
    return 0;
}
