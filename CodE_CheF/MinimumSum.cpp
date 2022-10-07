// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int arr[n+1];
// 		int brr[n+1];
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>arr[i];
// 		}
// 		int x;
// 		int sum=arr[0];
		
// 		for(int i=1;i<n;i++)
// 		{  
// 			sum=sum^arr[i];
// 			brr[i]=sum;
// 		}
// 		cout<<sum<<endl;
// 		if(sum!=0)
// 		{
// 			int crr[n+1];
// 			int temp=0;

// 			for(int i=0;i<n;i++)
// 			{
// 				crr[i]=sum^arr[i];
				
// 			}
// 			int res=0;
// 			for(int i=0;i<n;i++)
// 			{
// 				cout<<crr[i]<<" ";
// 				res+=crr[i];
// 			}
// 			cout<<"\n";
// 			cout<<res<<endl;
// 		}
// 		else
// 		{
// 			cout<<0<<endl;
// 		}
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>a(n);
	    for(ll i=0;i<n;i++)
	    	cin>>a[i];
	    ll res=0;
	    for(ll j=31;j>=0;j--)
	    {
	        ll c=0;
	        for(ll i=0;i<n;i++)
	        {
	            if(a[i]&(1<<j))c++;
	        }
	        if(c>n/2)res|=(1<<j);
	    }
	    ll sum=0;
	    for(ll i=0;i<n;i++)
	    {
	        sum+=(a[i]^res);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
