#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int cnt=0;
	if(a>=0){
		cnt++;
	}
	if(b>=0){
		cnt++;
	}
	if(c>=0){
		cnt++;
	}
	if(d>=0){
		cnt++;
	}
	if(e>=0){
		cnt++;
	}
	if(f>=0){
		cnt++;
	}
	printf("%d valores positivos\n",cnt);

	return 0;
}