#include <stdio.h>
int main() 
{
	int num;
	int t,rem;
	int rev = 0;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&num);
	while(num != 0)
	{
	    rem = num % 10;
	    rev = rev * 10 + rem;
	    num = num / 10;
	}
	  printf("%d\n",rev);
	  rev = 0;
	}
	return 0;
}
