#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.length()==b.length()) return a<b;
    return a.length()<b.length();
}
int main(){
	string s[200000+5];
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s,s+n,cmp);
	for (int i=1;i<=n;i++){
		cout<<s[i];
	}
	return 0;
}