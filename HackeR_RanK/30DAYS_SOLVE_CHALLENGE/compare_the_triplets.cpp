//................Mohammad Imran...........//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int Alice[3],Bob[3];
	for(int i=0;i<3;i++){
		cin>>Alice[i];
	}
	for(int j=0;j<3;j++){
		cin>>Bob[j];
	}
	int A=0;
	int B=0;

	if(Alice[0]>Bob[0]){
		A++;
	}
	else if(Alice[0]<Bob[0]){
		B++;
	}
	if(Alice[1]>Bob[1]){
		A++;
	}
	else if(Alice[1]<Bob[1]){
		B++;
	}
	if(Alice[2]>Bob[2]){
		A++;
	}
	else if(Alice[2]<Bob[2]){
		B++;
	}
	printf("%d %d\n",A,B);
	return 0;
}