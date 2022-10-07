//.............Mohammad Imran............//
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll array[n+1];
	for(ll i=1;i<=n;i++){
		cin>>array[i];
	}
	ll sum=0;
	for(ll j=1;j<=n;j++){
		sum+=array[j];
	}
	cout<<sum<<endl;
	return 0;
}