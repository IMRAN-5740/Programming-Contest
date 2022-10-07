#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		cout<<n<<" ";
		while(n!=1)
		{
			//cout<<n<<" ";
		if(n%2==0)
			{
				n=n/2;
				cout<<n<<" ";
			}
			else
			{
				n=n*3+1;
				cout<<n<<" ";
			}
		}		
	}
	cout<<endl;
	return 0;
}