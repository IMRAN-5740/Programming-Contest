#include <bits/stdc++.h>
#define ll long long
using namespace std;
set<ll>s;
void Count_Divisor(ll n)
{
	for(ll i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			ll x=i;
			ll y=n/i;
			s.insert(x);
			s.insert(y);
		}
	}
}
int main()
{
		ll n,k;
		cin>>n>>k;
		Count_Divisor(n);
		vector<ll>Vec;
		Vec.assign(s.begin(),s.end());
		if(k>Vec.size())
			{
				cout<<-1<<endl;
			}
		else
		{
			cout<<Vec[k-1]<<endl;
		}
	return 0;
}