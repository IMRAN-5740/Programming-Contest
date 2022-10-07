#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float sum=0;
	scanf("%d",&n);
	int array[n];
	float cnt=0;
	float avg=0;
	for (i = 0; i <n; i++)
	{
		scanf("%d",&array[i]);
	}
		for (i=0;i<n;i++)
		{
			sum=sum+(float)array[i];
			cnt++;
			avg=sum/(float)cnt;
			printf("%f\n",avg);
	    }
	return 0;
}