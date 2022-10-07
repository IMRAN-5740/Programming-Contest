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
		ll x,y;
		cin>>x>>y;
		if((x>0 and y==0) or (x==0 and y>0)or(x>0 and y>0))
		{

			int res=x+y;
			if(x==0  and y%2==0)
			{
				cout<<"YES"<<endl;
			}
			else if(x==0  and y%2==1)
			{
				cout<<"NO"<<endl;
			}
			else if (x==1 and y%2==0)
			{
				cout<<"NO"<<endl;
			}
			else if (x==2 and y==1)
			{
				cout<<"YES"<<endl;
			}
			else if(x==2 and ((y>1)and(y%2==1)))
			{
				cout<<"YES"<<endl;
			}
			else if((x>1 and(x%2==1)) and ((y>1)and(y%2==1)))
			{
				cout<<"NO"<<endl;
			}
			else
			{
				int res=(1*x)+(2*y);
				if(res%2==0)
				{
					cout<<"YES"<<endl;
				}
				else {
					cout<<"NO"<<endl;
				}

			}
		}
	}

	return 0;
}