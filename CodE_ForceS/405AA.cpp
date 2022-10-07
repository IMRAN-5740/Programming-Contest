#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n+1];
	for(int i=1;i<=n;i++){
		cin>>array[i];
	}
	sort(array+1,array+1+n);
	for(int i=1;i<=n;i++){
		cout<<array[i]<<" ";
	}
	puts("\n");
	return 0;
}