#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  t,size;
	cin>>t;
	char s[10000];
	while(t--)
	{
		scanf("%s",s);
		size=strlen(s);
		for(int i=0;i<size;i+=2)
		{
			printf("%c",s[i]);
		}
		cout<<" ";
		for(int i=1;i<size;i+=2)
		{
			printf("%c",s[i]);
		}
		cout<<endl;
	}
	return 0;
}
