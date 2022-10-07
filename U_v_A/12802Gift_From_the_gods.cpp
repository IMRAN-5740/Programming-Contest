#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check_prime(ll n)
{
	if (n<2)
		return 0;
	for (int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int num_reverse(ll n)
{
	int p=0;
	while (n!=0)
	{
		p=p*10;
		p=p+n%10;
		n=n/10;
	}
	return p;
}

int main()
{
	ll  n,k;
	while (1)
	{
		cin>>n;
		k=2*n;
		cout<<k<<endl;
		if (num_reverse(n)==n)
		{
			if (check_prime (num_reverse(n)))
			
				break;
		}
	}
	return 0;
}
			
		
	
