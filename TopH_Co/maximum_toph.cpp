#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int array[n];
	int max=0;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for (i = 0; i<n;i++)
	{
		if (max<array[i])
		{
			max=array[i];
		}
	}
	printf("%d\n",max);
	return 0;
}