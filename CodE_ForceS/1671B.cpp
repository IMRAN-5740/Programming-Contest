#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		 ll n;cin>>n;
		 ll arr[n+1];
		 for(ll i=1;i<=n;i++)
		 {
		 	cin>>arr[i];
		 }		
		 sort(arr+1,arr+1+n);

		 if(n==1)cout<<"YES"<<endl;
		 // for(ll i=1;i<=n;i++)
		 // {
		 // 	if((abs(arr[i]-arr[i+1])==1))continue;
		 // }
		 else
		 {


		 ll mn=arr[1];
		 ll mx=arr[n];
		 ll chk=mn+n;
		 if((chk+1)==mx or (chk-1)==mx or chk==mx)cout<<"YES"<<endl;
		 else cout<<"NO"<<endl;
		}
	}
	return 0;
}