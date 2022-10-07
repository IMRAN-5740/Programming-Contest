#include<bits./stdc++.h>
const int N=(int)1e5+5;
#define ll long long 
int arr[N];
using namespace std;
int main(){
	int t;
	cin>>t;
		for(int i=1;i<=t;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			int q;
			cin>>q;
			while (q--){

			ll l,r,v;
			cin>>l>>r>>v;
			for (int j=l;j<=r;j++){
				arr[j]=arr[r]-arr[r+1]+v;
				cout<<arr[j]<<" ";
			}
			cout<<"\n";
		}

// for (int i=1;i<=t;i++){
// 	cout<<arr[i];
// }
	cout<<endl;
	return 0;
}