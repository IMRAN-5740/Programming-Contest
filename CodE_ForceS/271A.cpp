/* Bismillahir Rahmanir Rahim */
/* Welcome my solving  programming */
/*.......Mohammad Imran.......*/

#include<bits/stdc++.h>
#define ll long long
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
    int year,a,b,c,d;
  	cin>>year;
    while(true){
        year=year+1;
        a=year/1000;
        b=year/100%10;
        c=year/10%10;
        d=year%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
            break;
        }
    }
    cout<<year<<endl;
	return 0;
}