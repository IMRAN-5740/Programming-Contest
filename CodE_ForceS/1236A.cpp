#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a,b,c,res;
	for (int i=1;i<=t;i++)
	{
		cin>>a>>b>>c;
		if ((a>=1 && b>=2) && (c>=0))  
		{
			a=a-1;
			b=b-2;
			res =a+b+c;
			printf ("%d\n",res);
		}
		else if ((a>=0) && (b>=1 && c>=2))
		{
			b=b-1;
			c=c-2;
			res =a+b+c;
			printf("%d\n",res);
		}

		else 
			printf("0\n");
	}
	return 0;
}