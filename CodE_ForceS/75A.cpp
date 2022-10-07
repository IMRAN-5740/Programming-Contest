#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
//	cin>>t;
	while(t--)
	{
		// ll a,b;cin>>a>>b;
		// cout<<(a+b)<<endl;
		string s1,s2;
		cin>>s1>>s2;

		ll a=stoll(s1);
		ll b=stoll(s2);
		ll sum;
		sum=a+b;

		string  s3;
		s3=to_string(sum);
		// ll len1=s1.size();
		// ll len2=s2.size();
		// ll len3=s3.size();
		for(ll i=0;i<s1.size();i++)
		{
			if(s1[i]=='0')
				{
					s1.erase(s1.begin()+i);i--;
				}
			else continue;
		}
		ll a1=stoll(s1);
		//a1=a1%10;

		for(ll i=0;i<s2.size();i++)
		{
			if(s2[i]=='0')
				{
					s2.erase(s2.begin()+i);i--;
				}
			else continue;
		}
		ll b1=stoll(s2);
	//	b1=b1%10;
		for(ll i=0;i<s3.size();i++)
		{
			if(s3[i]=='0')
				{
					s3.erase(s3.begin()+i);i--;
				}
			else continue;
		}
		ll c1=stoll(s3);
	//	c1=c1%10;
		if((a1+b1)==c1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		// cout<<a<<" "<<b<<" "<<sum<<endl;
		// cout<<a1<<" "<<b1<<" "<<c1<<endl;
	}
	return 0;
}