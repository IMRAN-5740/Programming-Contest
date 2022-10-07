/****************** 			***********************/
     /****************BSMRSTU*****************/
/***********BISMILLAHIR RAHMANIR RAHIM*************/
/*.................Mohammad Imran................*/
/*..................Dept Of CSE.................*/

#include<bits/stdc++.h>
#define ll long long
#define llu unsigned long long
#define pi acos(-1.0)
#define dd double
const int N          = (int)2e5 + 5 ;
const int maxN       = (int)1e6 + 6 ;
const ll  Mod        = (ll)1e9 + 7 ;
const int inf        = (int)2e9 ;
const ll  Inf        = (ll)1e18 ;
const int mod        = (int)1e9 + 7 ;
using namespace std;
int main(){
	llu t;
	cin>>t;
	while(t--){
		llu d,n,sum=0;
		cin>>d>>n;
		sum=(n*(n+1))/2;
		for(llu j=1;j<d;j++){
			sum=(sum*(sum+1))/2;
		}
		// for(llu j=1;j<=d;j++){
		// 	sum=sum+n;
		// }
		// for(llu i=1;i<=sum;i++){
		// 	res=res+i;
		// }
		// cout<<res<<endl;
		printf("%llu\n",sum);
	}
	return 0;
}