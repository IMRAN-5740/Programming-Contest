#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,q;
	cin>>q>>n;
	int a[n + 1] = {0};
	while(q--){
		int x,y;
		cin>>x>>y;
		a[x] += 1;
		a[y + 1] -= 1;
	}
	int cnt = 0;
	for(int i = 1; i <= n; ++i){
		a[i] += a[i - 1];
		if(a[i] == 0)
			++cnt;
	}
	cout<<cnt<<endl;
	for(int i = 1; i <= n; ++i){
		if(a[i] == 0)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}