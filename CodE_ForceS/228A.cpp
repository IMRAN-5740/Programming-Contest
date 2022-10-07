#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int cnt=0;
	if(a==b && b==c &&c==d){
		cout<<"3"<<endl;
	}
	
	else if (a==b && c==d){
		cout<<"2"<<endl;
	}
	else if (a==c && b==d){
		cout<<"2"<<endl;
	}
	else if (b==c && c==d){
		cout<<"2"<<endl;
	}
	else if (a==c && c==d){
		cout<<"2"<<endl;
	}
	else if (a==b && b==d){
		cout<<"2"<<endl;
	}
	else if (a==d && b==c){
		cout<<"2"<<endl;
	}
	else if (a==b && b==c){
		cout<<"2"<<endl;
	}
	else if (a==b){
		cout<<"1"<<endl;
	}
	else if (a==c){
		cout<<"1"<<endl;
	}
	else if (a==d){
		cout<<"1"<<endl;
	}
	else if (b==c){
		cout<<"1"<<endl;
	}
	else if (b==d){
		cout<<"1"<<endl;
	}
	else if (c==d){
		cout<<"1"<<endl;
	}
	else if (a!=b && b!=c && c!=d ){
		cout<<"0"<<endl;
	}
	return 0;
}