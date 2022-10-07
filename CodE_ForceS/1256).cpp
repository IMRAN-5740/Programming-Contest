#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--){
		int a,b,n,s;
		cin>>a>>b>>n>>s;
			int k=(n-a+1)*n;
			if (k>=s){
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
	}
	return 0;
}