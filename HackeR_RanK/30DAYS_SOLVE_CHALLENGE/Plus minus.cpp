#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    double cnt=0,mnt=0,nmt=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            cnt++;
        }
        if (arr[i]<0)
        {
            mnt++;
        }
        if(arr[i]==0)
        {
            nmt++;
        }
    }
    cnt=cnt/n;
    mnt=mnt/n;
    nmt=nmt/n;
    printf("%.6lf\n",cnt);
    printf("%.6lf\n",mnt);
    printf("%.6lf",nmt);
    return 0;

}
