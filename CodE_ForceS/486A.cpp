#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,sum=0;
	
	while(cin>>n){
		// ll array[n+1];
		// for(ll i=1;i<=n;i++){
		// 	array[i]=i;
		// }
		// for(ll j=1;j<=n;j+=2){
		// 	array[j]=-1*j;
		// }
		// for(ll k=1;k<=n;k++){
		// 	sum=sum+array[k];
		// 	cout<<array[k]<<" ";
		// }
		//cout<<sum<<endl;
		if(n==1){
			cout<<n*-1<<endl;
		}
		else if(n%2!=1){
			cout<<n/2<<endl;
		}
		else{
			cout<<(n/2+1)*-1<<endl;
		}
		//sum=0;
	}
	return 0;
}