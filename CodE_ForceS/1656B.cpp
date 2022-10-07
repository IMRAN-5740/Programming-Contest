#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,k;cin>>n>>k;
		ll ar[n+1];
		// for(ll i=0;i<n;i++)
		// {
		// 	ll x;
		// 	cin>>x;
		// 	arr[i]=x;
		// }
		// sort(arr,arr+n);
		// if((arr[n-1]-arr[0])==k)
		// {
		// 	cout<<"YES"<<endl; 
		// }
		// else cout<<"NO"<<endl;

        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar[i]=x;
            mp[x]++;
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            mp[ar[i]]--;
            int a = ar[i]+k;
            int b = ar[i]-k;
            if(mp[a]>0 || mp[b]>0)
            {
                ans=1;
                break;
            }
            mp[ar[i]]++;
        }
        if(ans==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}