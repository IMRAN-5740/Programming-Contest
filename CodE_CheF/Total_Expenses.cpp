#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll t;
	cin>>t;
	while(t--){
		double a,b,res=0;
		cin>>a>>b;
		if(a>1000)
		{
			res=(a*b)*0.1;
			printf("%0.6f\n",(a*b)-res);
		}
		else{
			printf("%0.6f\n",a*b);
		}
	}
	return 0;

}