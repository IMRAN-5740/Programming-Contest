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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		// vector<int> a(n); 

		// for (int i=0;i<a.size();i++)
		// {
		// 	int it;
		// 	cin>>it;
		// 	a.push_back(it);
		// } 
		// int mna = *min_element(a.begin(), a.end());
		// vector<int> b(n);
		// for (int i=0;i<b.size();i++)
		// {
		// 	int it;
		// 	cin>>it;
		// 	b.push_back(it);
		// }
		
		// int mnb = *min_element(b.begin(), b.end());
		int a[100];
		int b[100];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int mna = INT_MAX, mnb = INT_MAX;
		for (int i = 1; i <= n; i++) 
		{
			cin >> a[i];
			mna = min(mna, a[i]);
		}		
		for (int i = 1; i <= n; i++) 
		{
			cin >> b[i];
			mnb = min(mnb, b[i]);
		}

		ll ans = 0;
		for (int i=1;i<=n;i++) 
		{
			ans =ans+ max(a[i] - mna, b[i] - mnb);
		}
		cout << ans << endl;
	}
	

	return 0;
}