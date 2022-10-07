#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<int>vec(n);
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			vec[i]=x;
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=vec[i];
		}
		if(sum%n==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
	return 0;
}