#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<int>vc;
		set<int>st;
		for(int i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vc.push_back(x);
			st.insert(x);
		}
		cout<<st.size()<<endl;
	}
	return 0;
}