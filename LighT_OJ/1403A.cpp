#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t,sum=0;
	cin>>t;
	for(ll i=1;i<=t;i++){
		ll a,b;
		cin>>a>>b;
		sum=a+b;
		printf("Case %lld: %lld\n",i,sum);
	}
	return 0;
}