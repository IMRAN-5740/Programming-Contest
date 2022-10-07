#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int array[12]={3,5,7,11,13,17,19,23,29,31,37,41};
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		if(n & 1)
		{
			n--;
			int a,b,c;
			int x,y;
			c=1;
			for(int i=0;i<12;i++)
			{
				x=array[i];
				y=n-x;
				if( __gcd(x,y)==c)
				{ 
					a=x;
					b=y;
					break;
				}
			}
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		else
		{
			cout<<2<<" "<<n-3<<" "<<1<<endl;
		}
	}
	return 0;
}