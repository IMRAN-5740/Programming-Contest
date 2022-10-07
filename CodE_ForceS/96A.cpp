/****************** 			***********************/
     /****************BSMRSTU*****************/
/***********BISMILLAHIR RAHMANIR RAHIM*************/
/*.................Mohammad Imran................*/
/*..................Dept Of CSE.................*/

#include<bits/stdc++.h>
#define ll long long
#define llu unsigned long long
#define pi acos(-1.0)
#define FORl(i, x, y) for(auto i=x; i<y; ++i)
#define dd double
const int N          = (int)2e5 + 5 ;
const int maxN       = (int)1e6 + 6 ;
const ll  Mod        = (ll)1e9 + 7 ;
const int inf        = (int)2e9 ;
const ll  Inf        = (ll)1e18 ;
const int mod        = (int)1e9 + 7 ;
using namespace std;
int main(){
string s;
    cin>>s;
    int cnt=1;
    FORl(i,1,s.size()){
        if(s[i]==s[i-1]){
            ++cnt;
            if(cnt>=7){
                cout<<"YES";
                return 0;
            }
        }
        else cnt = 1;
    }
    if(cnt>=7){
                cout<<"YES";
                return 0;
            }
        else cout<<"NO";
    return 0;
}