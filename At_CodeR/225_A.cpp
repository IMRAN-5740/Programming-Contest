#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	if(len==3){
		if(s[0]==s[1] and s[1]==s[2])
		{
			cout<<1<<endl;
		}
		else if(s[0]==s[1] or s[1]==s[2] or s[0]==s[2])
		{
			cout<<3<<endl;

		}
		else {
			cout<<6<<endl;
		}
	}	
	return 0;
}