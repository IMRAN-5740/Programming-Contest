#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n, m, ans = 1, i, j, d;
	cin >> n >> m;
	ll a[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			d = abs(a[i] - a[j]);
			ans = ans * d;
			ans %= m;
		}
	}
	cout << ans << endl;
	return 0;
}