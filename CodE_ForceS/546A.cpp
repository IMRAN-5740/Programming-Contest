	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long
	int main(){
		ll k,n,w;
		cin>>k>>n>>w;
		ll cost=0;
		for(ll i=1;i<=w;i++){
			cost=cost+(i*k);
		}
		if(n>cost){
			cout<<"0"<<endl;
		}
		else if(n==cost){
			cout<<"0"<<endl;
		}
		else{
			ll borrow=cost-n;
			cout<<borrow<<endl;
		}
		return 0;
	}