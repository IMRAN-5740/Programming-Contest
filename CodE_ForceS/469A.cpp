#include<bits/stdc++.h>
using namespace std;
int main(){
	// //Drive code
	// int n;
	// cin>>n;
	// int p;
	// cin>>p;
	// int array[p];
	// for(int i=0;i<p;i++){
	// 	cin>>array[i];
	// }
	// int array1[p];
	// for(int j=0;j<p;j++){
	// 	cin>>array1[j];
	// }
	// int cnt=0,cnt1=0;
	// for(int k=0;k<p;k++){
	// 	if(array[k]==n){
	// 		cnt++;
	// 	}
	// }
	// for(int k=0;k<p;k++){
	// 	if(array1[k]==n){
	// 		cnt1++;
	// 	}
	// }
	// if(cnt>=1 or cnt1>=1){
	// 	cout<<"I become the guy."<<endl;
	// }else{
	// 	cout<<"Oh, my keyboard!"<<endl;
	// }
	int n;
	 cin>> n;
    int x,y,a; 
    cin>> x;
    set<int> st;
    for(int i=0;i<x;++i)
    {
        cin>> a;
        st.insert(a);
    }
    cin>> y;
    for(int i=0;i<y;++i)
    {
        cin>> a;
        st.insert(a);
    }
    if(st.size()==n)
    {
    	cout<<"I become the guy."<<endl;
    }
    else{
    	cout<<"Oh, my keyboard!"<<endl;
    } 

	return 0;
}