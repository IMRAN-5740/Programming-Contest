/**
MD AMRAN MONDOL
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
int main()
{
	FastIO;
	int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,i,x;
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n;i++)
            {
                if(i<=n/2)
                    cout<<2*i<<" ";
                else if(i==n)
                {
                    x=i-(n/2);
                    cout<<(2*x)-1+(n/2)<<endl;
                }
                else
                {
                    x=i-(n/2);
                    cout<<(2*x)-1<<" ";
                }
            }
        }
        else
            cout<<"NO"<<endl;
    }
	

	return 0;
}