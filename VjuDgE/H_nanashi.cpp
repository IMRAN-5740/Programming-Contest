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
ll arr[1000000];
ll brr[1000000];
int crr[100000];
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(ll j=1;j<=m;j++){
		cin>>brr[j];
	}
	int cnt=0;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			if((arr[i]+brr[j])%2!=0){
				crr[i++]=cnt++;
			}
		}
	}
	ll res=max(crr[n],cnt-1);
	printf("%lld\n",res);
	return 0;
}