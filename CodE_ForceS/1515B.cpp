// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		map<ll,ll>mp;
// 		ll ans=4;
// 		mp[2]=1;
// 		mp[4]=1;
// 		ll i=1;
// 		while(ans<=1e9)
// 		{
// 			ll res=i+i+1;
// 			res=res*4;
// 			ans=ans+res;
// 			mp[ans]=1;
// 			i++;
// 		}
// 		ans=2;
// 		i=1;
// 		while(ans<=1e9)
// 		{
// 			ll res=i+i+1;
// 			res=res*2;
// 			ans=ans+res;
// 			mp[ans]=1;
// 			i++;
// 		}
// 		if(mp[n]==1)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"NO"<<endl;
// 		}
		
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using  namespace  std;
#define ll long long
int main()
{
    map<ll,ll>mp;
    ll ans=4;
    mp[2]=1;
    mp[4]=1;
    ll i=1;
    while(ans<=1e9)
    {
        ll an=i+i+1;
        an*=4;
        ans+=an;
        mp[ans]=1;
        i++;
    }
    ans=2;
    i=1;
    while(ans<=1e9)
    {
        ll an=i+i+1;
        an*=2;
        ans+=an;
        mp[ans]=1;
        i++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(mp[n]==1)
        	{
        		cout<<"YES"<<endl;
        	}
        else 
        	{
        		cout<<"NO"<<endl;
        	}
    }
    return 0;
}
