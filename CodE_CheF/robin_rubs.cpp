#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll N,rank;
		cin>>N>>rank;
		ll team,remain,point,average;
		remain=(N-rank)*2;
		team=rank*(rank-1)/2;
		point=(team/rank)*2;
		remain=remain+point;

	}
	return 0;
}