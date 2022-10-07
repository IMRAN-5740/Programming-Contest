#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,m,sum=0;
		cin>>n>>m;
		ll array[n+1];
		for(ll i=1;i<=n;i++){
			cin>>array[i];
			sum+=array[i];
		}
	//	avg=sum/n;
		if(sum<m){
			cout<<sum<<endl;
		}else{
			cout<<m<<endl;
		}
	}
	return 0;
}