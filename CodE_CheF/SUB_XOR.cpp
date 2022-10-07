#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=998244353;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;

		string s;
		cin>>s;
		ll cnt=1;
		ll arr[n]={0};
		ll sol=0;
	if(s[0]=='1')
	{
		arr[0]=1; 
	}
ll  a=arr[0];
for(ll i=1;i<n;i++)
{
	if(s[i]=='1')
	{
		a+=(i+1);
	}
	arr[i]=a;
	arr[i]=arr[i]%2;

}
for(ll i=n-1;i>=0;i--)

{
	if(arr[i]==1)
	{
		sol+=cnt;
		sol=sol%mod;
	}
	cnt=cnt*2;
	cnt=cnt%mod;
}
cout<<sol%mod<<endl;

	}
	return 0;
}