#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n;	cin>>n;
		ll sum=(n*(n+1))/2;
		if(sum & 1)cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			ll target=sum/2;
			set<ll>s1,s2; 
			for(ll i=1;i<=n;i++)
			{
				s1.insert(i);
			}
			ll t=n;
			while(s1.count(target)==0)
			{
				target=target-t;
				s1.erase(t);
				s2.insert(t);
				t--;
			}
			s1.erase(target);
			s2.insert(target);

			cout<<s1.size()<<endl;
			set<ll>::iterator it;
			for(it=s1.begin();it!=s1.end();it++)
			{
				cout<<*it<<" ";
			}
			cout<<endl;
			cout<<s2.size()<<endl;
			for(it=s2.begin();it!=s2.end();it++)
			{
				cout<<*it<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}