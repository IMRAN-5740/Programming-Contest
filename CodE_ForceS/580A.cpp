#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> array;
	int value;
	for(int i=0;i<n;i++){
		cin>>value;

		array.push_back(value);
	}
	int cnt=1,result=1;
	for(int i=0;i<n-1;i++){
		if(array[i+1]>=array[i]){
			cnt++;
			result=max(cnt,result);
		}
		else{
			cnt=1;
		}
	}
	cout<<result<<endl;
	return 0;
}