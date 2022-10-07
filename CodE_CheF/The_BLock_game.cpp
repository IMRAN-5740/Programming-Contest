	#include<stdio.h>
#include<math.h>
	int main()
	{
		int n, i,j,sum=0,r;
		int t;
		scanf("%d",&t);
		while(t--){
		scanf("%d",&n);
		int temp=n;
		while (temp!=0)
		{
			 r=temp%10;
			 sum=sum*10+r;
			 temp =temp/10;
		}

		//printf("%d\n",sum);
		if(n==sum)
			{
				printf("wins\n"); 
			}
			else
				printf("loses\n");
			sum=0;

			}
		//	getch();
			return 0;
	}