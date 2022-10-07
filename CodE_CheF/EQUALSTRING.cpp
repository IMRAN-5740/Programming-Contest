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
		string s,k;
		cin>>s>>k;
		ll arr[28]={0};
		for(ll i=0;i<n;i++)
		{
			if(s[i]!=k[i])
			{
				char tem=k[i];
				ll val=k[i]-'a';
				arr[val]=1;
			}
		}	
		ll cnt=0;
		for(ll i=0;i<28;i++)
		{
			//cout<<arr[i]<<" ";
			if(arr[i]==1)
			{
				cnt++;
			}
		}
		//cout<<endl;	
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}