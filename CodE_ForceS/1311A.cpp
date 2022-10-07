#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a,b,even=0,odd;
		cin>>a>>b;
		if(a==b){
			cout<<"0"<<endl;
		}
		else if(a>b){
			even=a-b;
			if(even%2!=0){
				cout<<"2"<<endl;
			}
			else{
				cout<<"1"<<endl;
			}
		}
		else if(a<b){
			even=b-a;
			if(even%2!=0){
				cout<<"1"<<endl;
			}
			else{
				cout<<"2"<<endl;
			}
		}
	}
	return 0;
}