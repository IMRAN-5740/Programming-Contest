#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	// for(int i=0;i<len;i++){
	// 	if(s[i]>'Z'){
	// 		s[i]=s[i]-32;
	// 	}
	// }
	//cout<<s<<endl;
	int cnt=0;
	for(int i=0;i<len;i++){
		if(s[i]=='H'|| s[i]=='Q'|| s[i]=='9'  ){
			cnt++;
		}
	}
	if(cnt>0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}