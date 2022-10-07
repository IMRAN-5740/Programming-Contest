#include <bits/stdc++.h>
using namespace std;
vector<int>Vec;
void Sieve(int n)
{
	int Prime[100001];
	memset(Prime,0,sizeof(Prime));
	for(int i=2;i*i<=n;i++)
	{
		if(Prime[i]==0)
		{
			for(int j=i*i;j<=n;j=j+i)
			{
				Prime[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(Prime[i]==0)		
			{
				Vec.push_back(i);
			}
	}
}
void Init(int l,int r)
{
	if(l==1)l++;
	int Range=r-l+1;
	int array[Range+1];
	for(int i=0;i<Range;i++)
	{
		array[i]=0;
	}
	for(int p:Vec)
	{
		if(p*p<=r)
		{
			int i=(l/p)*p;
			if(i<l)
			{
				i=i+p;
			}
			for(;i<=r;i+=p)
			{
				if(i!=p)
				{
					array[i-l]=1;
				}
			}
		}
	}
	for(int i=0;i<Range;i++)
	{
		if(array[i]==0)
		{
			cout<<l+i<<endl;
		}
	}
	//cout<<endl;
}
int main()

{
	Sieve(100000);
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		Init(l,r);
		cout<<endl;
	}
	return 0;
}
