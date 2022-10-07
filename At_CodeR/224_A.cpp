#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	//cout<<len<<endl;

	if(s[len-1]=='r' and s[len-2]=='e'){
		cout<<"er"<<endl;
	}
	else  if (s[len-1]=='t'&& s[len-2]=='s' && s[len-3]=='i'){
		cout<<"ist"<<endl;
	}
	return 0;
}