#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		string s;cin>>s;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]>='a' and s[i]<='z')
			{
				s[i]=s[i]-32;
			}
			
		}
		if(s=="YES")cout<<"YES"<<endl;
				else cout<<"NO"<<endl;		
	}
	return 0;
}