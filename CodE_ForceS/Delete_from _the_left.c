#include<stdio.h>
#include<string.h>
int main()
{
	char m[1000000],n[1000000];
	gets(m);
	gets(n); 
	int l=0,k=0,t1,cnt=0,min=0,i;
	   l=strlen(m);
	   k=strlen(n);
	   int x=l-1;
	   int y=k-1;
	   if (l<=t1)
	   {
	   	t1=l;
	   }
	   else

	   	t1=k;
	   for ( i=0;i<l;i++)
	   {
	   	if (m[x]==n[y])
	    	{
	   		cnt++;
	   		x--;
	   		y--;
	   	    }
	   	else
	   	   {
	   	 	break;
	       }
	   }
	   min=(l-cnt)+(k-cnt);
	   printf("%d\n",min);

return 0;
}
