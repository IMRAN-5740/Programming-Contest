#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	string s;
	while(cin>>s){
		ll cnt=0,upper=0,lower=0,digit=0;
		for(ll i=0; s[i]; i++){
			if(isdigit(s[i])){
				digit++;
			}
			else if(islower(s[i])){
				lower++;
			}
			else
				upper++;
		if (upper && lower && digit){
			cnt++;
			upper=0;
			lower=0;
			digit=0;
		}
	}
		cout<<cnt<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
#define ll long long
using namespace sd;
int main(){
	ll n;
	cin>>n;
	cout<<n<<endl;
	return 0;
}