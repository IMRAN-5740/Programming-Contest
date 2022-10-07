#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x,c,v;
	scanf("%d%d%d",&x,&c,&v);
	
	int k=n-(x+c+v);
	printf("%d\n",k);
	return 0; 
}