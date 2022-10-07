// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main() {
	
// 	string s;
// 	getline(cin,s);
// 	ll cnt=0,cnt1=0,k;
// 	//int k=strlen(s);
// 	k=sizeof(s);
// 	for(ll i=0;i<k;i++){

// 		if(s[i]=='h' || s[i]=='H'){
// 			cnt++;
// 		}
// 		else if(s[i]=='i'||s[i]=='I'){
// 			cnt1++;
// 		}
// 	}
// 	if(cnt>0  && cnt1>0){
// 		if(cnt==cnt1){
// 		cout<<"Yes"<<endl;
// 		cnt=0;
// 		cnt1=0;
// 	}
// 	else{
// 		cout<<"No"<<endl;
// 		}
// 	}
// 	else{
// 	cout<<"No"<<endl;
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0,cnt1=0,c=0;
	string s;
	cin>>s;
	if (s.size()&1) cout<<"No"<<endl;
	else {
		for(int i=0;i<s.length()-1;i+=2){
			if(s[i]!='h' || s[i+1]!='i') {
				cout<<"No"<<endl;
				return 0;
			}
		}
		cout<<"Yes"<<endl;
	}
	return 0;
}

