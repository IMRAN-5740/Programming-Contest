#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n+1];
	for(int i=0;i<n;i++){
		cin>>array[i];

	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+array[i];
	}
	sort(array,array+n);
	int cnt=0,sum1=0;
	//maximum value insure in the last location
	while(n--)
    {
        sum1+=array[n];
        cnt++;
        if(sum1>sum/2) break;
    }
    cout<<cnt<<endl;
}