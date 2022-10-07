#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,a,b,c;
	cin>>v>>a>>b>>c;
	int x=a;
	int y=b;
	int z=c;
	while(v!=0)
	{
		a=v-a;
		v=v-a;
		b=v-b;
		v=v-b;
		c=v-c;
		v=v-c;
	}
	if(v<a)
	{
		cout<<"F"<<endl;
		//break;
	}
	 if(v<b)
	{
		cout<<"M"<<endl;
		//break;
	}
	 if(v<c)
	{
		cout<<"T"<<endl;
		//break;
	}

	return 0;
	
}