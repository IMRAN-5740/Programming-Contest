#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, i;
	int s = 0;
	//scanf("%d %d", &n, &k);
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		int x;
		//scanf("%d", &x);
		cin >> x;
		if (i == k) continue;
		s += x;
	}
	int b;
	//scanf("%d",&b);
	cin >> b;
	if (s / 2 == b)
		//printf("Bon Appetit\n");             
		cout << "Bon Appetit" << endl;
	else
		//printf("%d\n",b-s/2);
		cout << b - s / 2 << endl;
}