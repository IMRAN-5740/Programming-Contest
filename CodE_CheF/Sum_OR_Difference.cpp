#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a>b){
		int res=a-b;
		cout<<res<<endl;
	}else{
		cout<<a+b<<endl;
	}
	return 0;
}