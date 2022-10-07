#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		int res1=0,res2=0;
		res1=z*2;
		res2=res1+x;
		if(res2>=y){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;

}