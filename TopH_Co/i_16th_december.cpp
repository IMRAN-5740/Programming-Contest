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
const int mod        = (int)1e9 + 7;
using namespace std;
int main(){
	dd t;
	cin>>t;
	while(t--){
		dd n;
		dd s1,s2,s3,s4;
		cin>>n;
		s1=(sqrt(n))/2;
		s2=(s1*s1*pi);
		s3=n-s2;
		s4=2*pi*s1;
		printf("%0.10f %0.10f\n",s3,s4);
	}
	return 0;
}