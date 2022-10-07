// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// //	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		ll cnt=0;
// 		for(ll i=0;i<s.size();i++)
// 		{
// 			if(s[i]=='8')cnt++;
// 		}	
// 		ll res=n/11;
// 		if( cnt>0)
// 		{
// 			ll res=n/11;
// 			ll ans=min(cnt,res);
// 			cout<<ans<<endl;
// 		}
// 		else 
// 			{
// 				cout<<0<<endl;
// 			}
// 	}
// 	return 0;
// }
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
		string s;
		cin>>s;
		ll cnt=0;
		ll pos=n;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='8')
			{
				pos=i;
				break;
			}
		}
		if((s.size()-pos)>=11)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}