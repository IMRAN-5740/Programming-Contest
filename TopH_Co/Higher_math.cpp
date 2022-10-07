#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for (int p=1;p<=n;p++)
	{
		scanf("%d %d %d",&i,&j,&k);
		if (((i*i)+(j*j)==(k*k))||((i*i)+(k*k)==(j*j))||((k*k)+(j*j)==(i*i)))
		{
			printf("Case %d: yes\n",p);
		}
		else 
			printf("Case %d: no\n",p);

	}
	return 0;
}