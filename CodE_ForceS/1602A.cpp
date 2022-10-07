#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){

	string s,s1;
	cin>>s;
	int len=s.size();
	s1=s;
	int a;
	sort(s.begin(),s.end());
	cout<<s[0]<<" ";
	for(int i=0;i<len;i++)
	{
		if(s[0]==s1[i]){
			a=i+1;
			break;
		}
		else{
			cout<<s1[i];
		}
	}
	for(int i=a;i<len;i++){
		cout<<s1[i];
	}	
	cout<<endl;
	}
	return 0;
}