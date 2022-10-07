#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin >>t;
	while(t--){
		ll n,cnt=0;
		cin>>n;
		ll array[n+1];

		for(ll i=1;i<= n;i++) {
			cin>>array[i];
			if (array[i]%2!=1) {
				cnt=i;
			}
		}
		if(cnt!=0) {
			cout <<"1"<< endl<<cnt<<endl;
		}
		else if(n!=1&&cnt==0) {
			cout <<"2"<<endl;
			cout <<"1"<<"2"<<endl;
		}
		else{
			if (array[1]%2==0) {
				cout<<"1"<<endl<<cnt<<endl;
			}
			else{
				cout <<"-1"<<endl;
			}
		}
	}
	return 0;
}