#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n,m,k;	cin>>n>>m>>k;
		ll arr[n];
		ll brr[m];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(ll j=0;j<m;j++)
		{
			cin>>brr[j];
		}
		sort(brr,brr+m);
		ll i=0,j=0,cnt=0;
		while(i<n)
		{
			while(j<m and brr[j]<(arr[i]-k))
			{
				j++; 
			}
			if(abs(arr[i]-brr[j])<=k)
			{
				i++;
				j++;
				cnt++;
			}
			else
				i++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}