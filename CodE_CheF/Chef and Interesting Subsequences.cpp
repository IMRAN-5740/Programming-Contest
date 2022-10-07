#include<bits/stdc++.h>
using namespace std;
const int N=(int)1e5+5;
int main()
{
    unsigned long long n,k,i,j,q1,q2,c=1,r=1;
    int min,t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%llu%llu",&n,&k);
        for(i=0; i<n; i++)
        {
            scanf("%d",a+i);
            for(j=0; j<i; j++)
            {
                /* Swapping algorithm with regimental value as a type of counting inversion*/
                if(a[j]>a[i])
                {
                    min=a[i];
                    a[i]=a[j];
                    a[j]=min;
                }
            }
        }
        q2=0;
        q1=0;
        for(i=0; i<n; i++)
        {
            if(i<k&&a[i]==a[k-1])
            {
                q2++;
                q1++;
            }
            else if(a[i]==a[k-1])
                q1++;
        }
        c=1;
        r=1;
        for(i=0; i<q2; i++)
        {
            c=c*(q1-i);
            r=r*(i+1);
            if(c%r==0)
            {
                c/=r;
                r=1;
            }
        }
        printf("%llu\n",c);
        t--;
    }
    return 0;
}



