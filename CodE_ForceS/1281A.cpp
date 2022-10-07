#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll len;
		len=s.size();
		cout<<len<<endl;
		if(s[len-1]=='o'  && 	s[len-2]=='p'){
			cout<<"FILIPINO"<<endl;
		}
		// else if(s[len-1]=='a'&& s[len-2]=='d'&& s[len-3]=='i' && s[len-4]=='n' && s[len-5]=='m'){
		// 	cout<<"KOREAN"<<endl;
		// }
		else if( (s[len-1]=='u' && s[len-2]=='s' && s[len-3]=='e' && s[len-4]=='d') || (s[len-1]=='u' && s[len-2]=='s' && s[len-3]=='a' && s[len-4]=='m')){
			cout<<"JAPANESE"<<endl;
		}
		else{
			cout<<"KOREAN"<<endl;
		}

	}
	return 0;
}
// po
// mnida
// desu
// masu