#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int even=0,odd=0;
	int array[n+1];
	for(int i=1;i<=n;i++){
		cin>>array[i];
		if(array[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	if(even>odd){
		cout<<"READY FOR BATTLE"<<endl;
	}else{
		cout<<"NOT READY"<<endl;
	}
	return 0;
}