#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll B,M;
		cin>>B;
		M=B/2;
		cout<<(M*(M-1))/2<<endl;
	}
	return 0;
}