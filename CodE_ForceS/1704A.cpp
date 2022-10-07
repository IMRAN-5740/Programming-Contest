#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n,m;	cin>>n>>m;
		string a,b;	cin>>a>>b;
		ll len=a.size();
		ll zero=0,one=0;
		string s;
		
		
		if(a.size()==b.size())
			{
				if(a==b)cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
		else
		{
			
			for(ll i =(n-m+1);i<n;i++)
			{
				s+=a[i];
			}

			char ch=b[0];
			b.erase(b.begin());
			for(ll i=0;i<(n-m+1);i++)
			{
				if(a[i]=='0')zero++;
				else one++;
			}
			if(s==b)
			{
				if(zero!=0 and one!=0)cout<<"YES"<<endl;
				else if(zero==0 and ch=='1' and one!=0)cout<<"YES"<<endl;
				else if(one==0 and ch=='0' and zero!=0) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else cout<<"NO"<<endl;
			
		}
	}
	return 0;
}