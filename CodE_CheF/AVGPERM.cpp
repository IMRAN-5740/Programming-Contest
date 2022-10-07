#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n==3)cout<<1<<" "<<2<<" "<<3<<endl;
		else
		{
			cout<<n<<" "; 
			cout<<n-2<<" ";
			for(ll i=1;i<n-3;i++)
			{
				cout<<i<<" ";
			}
			cout<<n-3<<" "<<n-1<<endl;
		}
	}
	return 0;
}