#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int array[n+1][n+1];
	for( i=0;i<n;i++){
		for( j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	int sum=0;
	int sum1=0;
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			if(i==j)
				sum+=array[i][j];
		}
	}
	for( i=0,j=n-1;i<n;i++,j--){
			sum1+=array[i][j];		
		}
	
	// cout<<sum<<endl;
	// cout<<sum1<<endl;
		cout<<abs(sum-sum1)<<endl;

}