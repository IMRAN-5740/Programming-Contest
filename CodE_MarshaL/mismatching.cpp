/*...Part - 01...*/

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <assert.h>
#include <new>
#include <sstream>
//#include <bits/stdc++.h>
using namespace std ;

/*...Part - 02...*/

// typedef long long               ll ;
// typedef long double             ld ;
// typedef unsigned long long      ull ;
// typedef pair<int,int>           pii ;
// typedef pair<ll,ll>             pll ;
// typedef vector<int>             vi ;
// typedef vector<ll>              vll ;
// typedef vector<vector<int>>     vvi ;

/* Input Section */

template <typename T> inline void Int(T &a){
    bool minus = false; a = 0; char ch = getchar();
    while (true) { if (ch == '-' or (ch >= '0' && ch <= '9')) break; ch = getchar(); }
    if (ch == '-') minus = true; else a = ch - '0';
    while (true) { ch = getchar(); if (ch < '0' || ch > '9') break; a = a * 10 + (ch - '0'); }
    if(minus)a *= -1 ;
}
template < typename T > inline void Int(T &a, T &b){Int(a), Int(b) ;}
template < typename T > inline void Int(T &a, T &b, T&c){Int(a, b), Int(c) ;}
template < typename T > inline void Int(T &a, T &b, T&c, T& d){Int(a, b), Int(c, d) ;}


/*...Part - 03...*/
/*....Debugger....*/

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {cout << endl ;}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ' ' ;
    err(++it, args...);
}

/*...Part - 04...*/
/*...Needed to change according to problem requirements...*/

const int N          = (int)2e5 + 5 ;
const int maxN       = (int)1e6 + 6 ;
const ll  Mod        = (ll)1e9 + 7 ;
const int inf        = (int)2e9 ;
const ll  Inf        = (ll)1e18 ;
const int mod        = (int)1e9 + 7 ;

/*..........................................................*/
/*...Part - 05...*/

#define     debug(x)    cerr << #x << " = " << x << '\n' ;
#define     rep(i,b,e)  for(__typeof(e) i = (b) ; i != (e + 1) - 2 * ((b) > (e))  ; i += 1 - 2 * ((b) > (e)))
#define     all(x)      x.begin() , x.end()
#define     rall(x)     x.rbegin() , x.rend()
#define     sz(x)       (int)x.size()
#define     ff          first
#define     ss          second
#define     pb          push_back
#define     eb          emplace_back
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
#define     Fread      freopen("input.txt","r",stdin)
#define     Fwrite     freopen("output.txt","w",stdout)

inline int add(int a, int b, int mod){a += b ;return a >= mod ? a - mod : a ;}
inline int sub(int a, int b, int mod){a -= b ;return a < 0 ? a + mod : a ;}
inline int mul(int a, int b, int mod){return (ll)a * b % mod ;}

/*...Part - 06...*/
/*...... ! Code start from here ! ......*/


int main(){
    int test = 1 , tc = 0 ;
    //Int(test) ;
    while(test--){
        int d ; Int(d) ;
        int oc, of, od ; Int(oc, of, od) ;
        int cs, cb, cm, cd ; Int(cs, cb, cm, cd) ;
        ll online = 1LL * oc + 1LL * (d - of) * od ;
        ll classic = 1LL * cb + 1LL * (d / cs) * cm + 1LL * d * cd ;
        if(online <= classic)puts("Online Taxi") ;
        else puts("Classic Taxi") ;
    }
    return 0 ;
}

/*...Always look at the part - 04...*/
/*...............END................*/