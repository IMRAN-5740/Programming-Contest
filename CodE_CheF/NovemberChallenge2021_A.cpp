/**MD AMRAN MONDOL
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
	ll t;
	cin>>t;
	while(t--)
		{
			ll x,y,a,b,k;
			cin>>x>>y>>a>>b>>k;
			ll s1=x,s2=y;
			for(int i=1;i<=k;i++)
			{
				s1+=a;
				s2+=b;
			}
			if(s1<s2)
			{
				cout<<"PETROL"<<endl;
			}
			else if(s1>s2)
			{
				cout<<"DIESEL"<<endl;
			}
			else{
				cout<<"SAME PRICE"<<endl;
			}

		}
	

	return 0;
}