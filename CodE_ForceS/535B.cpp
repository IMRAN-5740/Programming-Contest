#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	char arr[21];
	cin>>arr;
	ll len=strlen(arr);
	ll cnt;
	ll ans=0;
	ans=(1<<len)-2;
	for(ll i=len-1,cnt=0;i>=0;i--,cnt++)
	{
		if(arr[i]=='7')
		{
			ans+=(1<<cnt);
		}
	}
	cout<<ans+1<<endl;
	return 0;
}