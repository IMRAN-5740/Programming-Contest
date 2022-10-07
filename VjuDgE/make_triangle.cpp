 #include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int k= max(0,(arr[n]-(arr[1]+arr[0]-1)));
	cout<<k<<endl;
	return 0;
}