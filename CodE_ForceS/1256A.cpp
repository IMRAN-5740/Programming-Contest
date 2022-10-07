#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
	int q;
	cin >> q;
	while(q--)
	{
		int a,b,n,s;
		cin>>a>>b>>n>>s;
		ll ss=1;
		if (s%n<=b and (ss*a*n)+b>=s) 
		{
			cout << "YES\n";
		}
		else 
		{
			cout << "NO\n";
		}
	}
}