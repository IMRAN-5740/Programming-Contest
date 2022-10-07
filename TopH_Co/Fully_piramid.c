#include<stdio.h>
int main()
{
	int n,j,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=2;j<=n-i;j++)
			{
				printf(" ");
			}
			for(j=0;j<=i;j++)
				if(j!=i)
					printf("* ");
				else
					printf("*");
				printf("\n");
	}
	return 0;
}