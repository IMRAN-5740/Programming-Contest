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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>vec;
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			vec.push_back(x);
		}
		sort(vec.begin(),vec.end());
		vector<ll>vec1;
		for(ll i=0;i<n;i++)
		{
			ll y;
			cin>>y;
			vec1.push_back(y);
		}
		sort(vec1.begin(),vec1.end());
		bool cnt=1;
		for(ll i=0;i<n;i++)
		{
			if( (vec1[i]-vec[i])>=0 and (vec1[i]-vec[i])<=1 )
				continue;
				cnt=0;
				break;
			
		}
		if(cnt)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	

	return 0;
}