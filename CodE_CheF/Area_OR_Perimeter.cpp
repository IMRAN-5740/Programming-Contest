#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,b;
	cin>>l>>b;
	int area,peri;
	area=l*b;
	peri=2*(l+b);
	if(area>peri){
		cout<<"Area"<<endl;
		cout<<area<<endl;
	}else if(area<peri){
		cout<<"Peri"<<endl;
		cout<<peri<<endl;
	}else{
		cout<<"Eq"<<endl;
		cout<<peri<<endl;
	}
	return 0;
}