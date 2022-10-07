#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int array[n+1];
	for(j=0;j<n;j++){
		cin>>array[j];
	}
	int pos=0;
	int neg=0;
	int n_pos=0;
	for(j=0;j<n;j++){
		if(array[j]<0){
			neg++;
		}
		else if(array[j]>0){
			pos++;
		}
		else{
			n_pos++;
		}
	}
	float l,m,k;
	//Type casting 
	l=(float)neg/n;
	m=(float)pos/n;
	k=(float)n_pos/n;
	printf("%.6f\n%.6f\n%.6f\n",m,l,k);
	//cout<<neg<<pos<<n_pos<<endl;
	//cout<<l<<m<<k<<endl; 
	return 0;
}