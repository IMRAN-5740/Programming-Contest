#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,sum=0,temp,cnt=1;
		cin>>n;
		ll array[n+1];
		for(ll i=0;i<n;i++){
			cin>>array[i];
			}
			sort(array,array+n);
			// while(array[i]>0){
			// 	array[i]=array[i]-1;
			// }
			temp=array[n-1];
		for(ll j=0;j<n;j++){

			array[j]=temp-array[j];
			if(array[j]%2==1){
			cnt=0;
			break;
		}
	}
		if(cnt==1)
  		{
    	cout<<"YES"<<endl;
  		}
  		else
   	 cout<<"NO"<<endl;
	}
	return 0;
}
