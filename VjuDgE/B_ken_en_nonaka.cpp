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
 	int N,cnt=0;
  	string str;
  	cin>>N;
  for(int i;i<N;i++){
    cin>>str;
    if(str=="Y")
      cnt++;
  }
  if(cnt>0)
    cout<<"Four"<<endl;
  else
    cout<<"Three"<<endl;
	return 0;
}