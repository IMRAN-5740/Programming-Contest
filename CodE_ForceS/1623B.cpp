#include<bits/stdc++.h>
using namespace std;


int l[1005], r[1005];

int main() {
	int t;
	int n;
	cin >> t;
	while ( t--) 
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> l[i] >> r[i];
		}

		for (int i = 1; i <= n; i++) 
		{
			int d = l[i];
			for (int j = 1; j <= n; j++) 
			{
				if (l[i] == l[j] && r[i] > r[j])
					d = max(d, r[j] + 1);
			}
			cout << l[i] << ' ' << r[i] << ' ' << d << endl;
		}
		cout << endl;
	}
	return 0;
}