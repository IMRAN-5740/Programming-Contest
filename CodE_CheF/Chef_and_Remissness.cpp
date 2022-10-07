#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int res=a+b;
		if(a>=b){
			cout<<a<<" "<<res<<endl;
		}else{
			cout<<b<<" "<<res<<endl;
		}
	}
	return 0;
}