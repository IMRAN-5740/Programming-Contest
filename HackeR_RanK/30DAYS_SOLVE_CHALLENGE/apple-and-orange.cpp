#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,a,b,m,n,x;
	int aa=0,bb=0;
	scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);

	while(m--)
	{
		scanf("%d",&x);
		if(s <= a+x  && a+x <= t)
		{
			aa++;
		}
	}

	while(n--)
	{
		scanf("%d",&x);
		if(s <= b+x && b+x <= t)
		{
			bb++;
		}
	}
	
	printf("%d\n%d\n",aa,bb);
	return 0;
}