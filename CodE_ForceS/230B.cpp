/**
 * MD AMRAN MONDOL
Department of Computer Science and Engineering
BSMRSTU
**/
#include<bits/stdc++.h>
/****** Define ******/ 
#define     ll          long long
#define     ld          long double
#define     ull         unsigned long long
#define     pii         pair< int, int >
#define     pll         pair< ll, ll >
#define     vi          vector< int >
#define     vll         vector< ll >
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     FastIO      ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

/**********-> Constraints <-***********/
 
const int N          = (int)2e5 + 5 ;
const int maxN       = (int)1e6 + 6 ;
const ll  Mod        = (ll)1e9 + 7 ;
const int inf        = (int)2e9 ;
const ll  Inf        = (ll)1e18 ;
const int mod        = (int)1e9 + 7 ;
const double EPS     = (double)1e-9 ;
const double PI      = (double)acos(-1.0) ;

using namespace std;

ll Prime_Check(ll data)
{
    if(data==1)
    {
        return 0;
    }
    for(ll i=2;(i*i)<=data;i++)
    {
        if(data%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    FastIO;
    ll n;
    cin>>n;
    ll arr[N];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        ll test;
        test=sqrt(arr[i]);
        if((test*test)==arr[i] and Prime_Check(test)==1)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}