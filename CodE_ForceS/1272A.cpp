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
	ll t;
	cin>>t;
	ll arr[5];
	while(t--){
		for(ll i=0;i<3;i++)
			cin>>arr[i];
		
		sort(arr,arr+3);
		ll res=(2*arr[2]-(2*arr[0]))-4;
		if(res<0)	res=0;

			printf("%lld\n",res);
	}
	return 0;
}