#include<bits/stdc++.h>
#define ll long long
using namespace std;
 ll a, b, c, d, e, f;
ll fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    else{
    return (fn(n-1)+ fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );}
}
int main() {
     ll n, caseno = 0,cases,i;
   cin>>cases;
    for(  i=1;i<=cases;i++ ) {
       cin>>a>>b>>c>>d>>e>>f>>n;
       caseno = fn(n) % 10000007;
        printf("Case %lld: %lld\n",i,caseno );
    }
    return 0;
}
