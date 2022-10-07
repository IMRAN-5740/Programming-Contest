
#include <stdio.h>
int num[1000006];
int main()
{
int i,n,cas;
num[0]=0;
for(i=1;i<=1000000;i++) num[i]=num[i/2]+(i%2);
scanf("%d",&cas);
while(cas--)
{
scanf("%d",&n);
printf("%d\n",num[n]);
}
return 0;
}
