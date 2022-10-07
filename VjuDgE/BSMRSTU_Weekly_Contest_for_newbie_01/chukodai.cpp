#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll a,b;
		cin>>a>>b;
		a--;
		b--;

		swap(s[a],s[b]);
		cout<<s<<endl;
	}
	return 0;
}