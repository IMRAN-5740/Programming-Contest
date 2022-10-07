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
		ll arr[n+1];
		ll brr[n+1];-0033

		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>brr[i];
		}
		ll cnt=0;
		ll count=0;
		ll mn_val=arr[0]-brr[0];
		for(ll i=0;i<n;i++)
		{
			ll sub=arr[i]-brr[i];
			if(sub<0)
			{
				cout<<"NO"<<endl;
				count++;
				break;
			}
			else if(sub>1 and sub>mn_val)
			{
				cout<<"NO"<<endl;9/
				count++;
				
				arr[i]=arr[i]-sub;
			}
			
		}
		for(ll i=0;i<n;i++)
		{
			if(arr[i]!=brr[i])
			{
				cnt=1;
					break;							
			}
		}
		if(cnt==0 and count<=n)cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
									
		
		
		
		
	}
	return 0;
}