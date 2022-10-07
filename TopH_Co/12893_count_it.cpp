#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf


ll call(ll n) {
	if(n == 0) return 0;
	return call(n / 2) + n % 2;
}

int main()
{
	ll t,n,k;
	cin>>t;
	while (t--)
	{
		long long n; cin >> n;
		printf("%lld\n", call(n));
	}
	return 0;
}