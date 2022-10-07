#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int array[n+1];
		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		sort(array,array+n);
		// for(int i=0;i<n;i++){
		// 	cout<<array[i]<<" ";
		// }
		int pair_sum=array[0]+array[1];
		cout<<pair_sum<<endl;
	}
	return 0;
}