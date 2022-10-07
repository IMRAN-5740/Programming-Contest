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
		ll pointA=0;
		ll lenA=n;
		ll lenB=n;
		ll pointB=0;
		for(ll i=0;i<(2*n);i++)		

		{
			if(i%2==0)
			{
				pointA+=(s[i]-'0'); 
				lenA--;

			}
			else
			{
				pointB+=(s[i]-'0');
				lenB--;
			}
			if(pointA>(pointB+lenB))
			{
				ll res=i+1;
				cout<<res<<endl;
				break;
			}
			else if(pointB>(pointA+lenA))
			{
				ll res=i+1;
				cout<<res<<endl;
				break;
			}
			else if(pointB==pointA and i==(2*n)-1)
			{
				ll res=i+1;
				cout<<res<<endl;
				break;
			}

		}
	}
	return 0;
}