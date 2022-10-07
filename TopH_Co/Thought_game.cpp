#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int sum=0,x,y,avg=0;
	for (i=1;i<=n;i++)
	{
		scanf("%d%d",&x,&y);
		sum=x+y;
		avg=sum/2;
		if(avg%2==0)
		{
			printf("Sadia will be happy.\n");
		}
		else
			printf("Oops!\n");
	}
	return 0;
}
