#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	ll odd=0;
	vector<ll>vc(t);
	for(ll i=0;i<t;i++)
	{
		ll x;
		cin>>vc[i];
		//vc.push_back(x);
		if(vc[i]%2)odd++;
	} 
	odd=odd/2;
	for(auto x:vc)
	{
		if(x%2)
			{
				if(odd>0)odd--,x--;
				else x++;
			}
	
		cout<<(x/2)<<endl;
	}

	return 0;
}