#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll n,t,sum1=0,sum=0;
	cin>>t;
	ll n_even=0,n_odd=0,team;
	for (int i=1;i<=t;i++)
	{
		cin>>n;
		if (n%2==0)
		{
			n_even++;
		}
		else
			n_odd++;
	}

	cout<<n_even<<" "<<n_odd<<endl;
	if (n_odd%2==0)
	{
	   team=(n_odd*(n_odd-1)*(n_odd-2))/6;
	}
	cout<<team<<endl;

}