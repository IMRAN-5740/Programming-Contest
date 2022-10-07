#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,arr[5];
	cin>>n;
	///cin>>n>>arr[0]>>arr[1]>>arr[2];
	for(int i=0;i<=2;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+3);
	int a=arr[0];
	int b=arr[1];
	int c=arr[2];
	int x,y,z,r=0;
	if(n%a==0)
	{
		r=max(r,n/a);
	}
	else
	{
		x=n/a;
		while(x--)
		{
			y=n-x*a;
			if(y%b==0)
			{
				r=max(r,x+(y/b));
			}
			else
			{
				z=y/b;
				while(z--)
				{
					int k=y/b;
					if(k%c==0)
					{
						r=max(r,x+z+k/c);
					}
				}
			}
		}
	}
	cout<<r<<endl;
	return 0;
}