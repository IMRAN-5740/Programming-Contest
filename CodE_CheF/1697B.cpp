#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
			ll n,q;
			cin>>n>>q;
			ll arr[n+1];
			for(ll i=1;i<=n;i++)
			{
				ll p;
				cin>>p;
				arr[i]=p;
			}
			sort(arr+1,arr+n+1);//greater<int>());
		//	arr[0]=0;
			ll sum=0;
			ll prex[n+1];
			prex[0]=0;
			for(ll i=1;i<=n;i++)
			{
				prex[i]=prex[i-1]+arr[i];
			}
			// for(ll i=0;i<=n;i++)
			// {
			// 	cout<<prex[i]<<" ";
			// }
			//cout<<endl;
			while(q--)
			{
				ll x,y;
				cin>>x>>y;
				// for(ll i=x;i>=y;i--)
				// {
				// 	sum=sum+arr[i];
				// }
				sum=abs(prex[n-x+y]-prex[n-x]);
				cout<<sum<<endl;
				sum=0;
			}
	}
	return 0;
}
// /*
//     written by Pankaj Kumar.
//     country:-INDIA
// */
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// typedef long long ll ;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<vector<ll>> vvl;
// #define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// /*  Abbrevations  */
// #define ff first
// #define ss second
// #define mp make_pair
// #define line cout<<endl;
// #define pb push_back
// // loops
// #define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// // Some print
// #define no cout<<"NO"<<endl;
// #define yes cout<<"YES"<<endl;
// // sort
// #define all(V) (V).begin(),(V).end()
// #define srt(V) sort(all(V))
// #define srtGreat(V) sort(all(V),greater<ll>())
// // some extra
// #define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
// #define precision(x) cout<<fixed<<setprecision(x);
// #define sz(V) ll(V.size())
// // function
// ll power(ll x,ll y,ll mod)
// {
//     ll res=1;
//     // x=x%mod;
//     while(y>0){
//         if(y%2==1){
//             res*=x;
//             // res=res%mod;
//         }
//         y/=2; x*=x; // x=x%mod;
//     }
//     return res;
// }
// ll str_to_num(string s){
//     return stoi(s);
// }
// string num_to_str(ll num){
//     return to_string(num);
// }
// /* ascii value 
//     A=65,Z=90,a=97,z=122
// */
// /* Some syntax 
//     //Syntax to create a min heap for priority queue
//     //priority_queue <int, vector<int>, greater<int>>pq;
// */
// /*  --------------------MAIN PROGRAM----------------------------*/
// const ll INF=1e18;
// const ll mod1=1e9+7;
// const ll mod2=998244353;
// // Techniques :
// // divide into cases, brute force, pattern finding
// // sort, greedy, binary search, two pointer
// // transform into graph


// // Experience :
// // Cp is nothing but only observation and mathematics.
// ll solve(){
//     ll n,q;
//     cin>>n>>q;
//     vl v(n);
//     vector<ll> prefix(n+1,0);
//     for(ll i=0;i<n;i++){
//         cin>>v[i];
//     }
//     srt(v);
//     for(ll i=0;i<n;i++){
//         prefix[i+1]=prefix[i]+v[i];
//     }
//     while(q--){
//         ll x,y;
//         cin>>x>>y;
//         ll ans=0;
//         ans=prefix[n-x+y]-prefix[n-x];
//         cout<<ans<<endl;
//     } 
//     return 0;
// }
// int main(){
//     speed;
//     /*
//         #ifndef ONLINE_JUDGE
//         freopen("input.txt","r",stdin);
//         freopen("output.txt","w",stdout);
//     #endif 
//     */
//     ll TestCase=1;
//     // cin>>TestCase;
//     while(TestCase--){
//         solve();
//     }
// }
