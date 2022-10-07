#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a>=b){
		int res=(24-a)+b;
		printf("O JOGO DUROU %d HORA(S)\n",res);
	}else{
		int res=b-a;
		printf("O JOGO DUROU %d HORA(S)\n",res);
	}
	return 0;
}