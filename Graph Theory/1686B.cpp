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
		ll arr[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int cnt=0;
		for(int i=2;i<=n;i++)
		{
			if(arr[i-1]>arr[i])
			{
				cnt++;
				i++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}