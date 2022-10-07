// /******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
// /*********************_BSMRSTU_**********************/
// /*.................MD AMRAN MONDOL................*/
// /*..................Dept Of CSE.................*/
// /*..........Part-01...........*/

// #include<bits/stdc++.h>
// using namespace std;

// /*..........Part-02...........*/
// #define ll                 long long
// #define llu                unsigned long long
// #define pii                pair<int,int>
// #define pll                pair<ll,ll>
// #define pil                pair<int,ll>
// #define pli                pair<ll,int>
// #define vi                 vector<int>
// #define vl                 vector<ll>
// #define pb                 push_back
// #define mp                 make_pair
// #define ff                 first
// #define ss                 second
// #define sz(x)              (int)x.size()
// #define all(v)             v.begin(),v.end()
// #define rall(v)            v.rbegin(),v.rend()
// #define mem(a, b)          memset(a,b,sizeof(a))
// #define pi       	       acos(-1.0)
// const int N = 2e5 + 5;
// ll brr[N];
// ll PrefixSum[4*N];
// /*..........Part-03...........*/
// void solve()
//     {
//     	ll n,x;
//     	cin>>n>>x;
    	
    	
//     	cout<<2*x<<endl;
//     }
// int main()
// {
// 	ll t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 	   solve();
// 	}
// 	//Drive Code Here//

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100007
ll row_num[mx], col_num[mx];
string arr[mx];
 
int main()
{
 
    ll k, num, m, tc, t = 1;
 
    cin>>tc;
 
    while (tc--)
    {
 
        ll row, col;
        cin>>row>>col;
 
        for (ll i = 0; i < row; i++) cin >> arr[i];
 
        ll ans = INT_MAX;
 
        for (ll i = 0; i < row; i++) row_num[i] = 0;
        for (ll i = 0; i < col; i++) col_num[i] = 0;
 
        for(ll i = 0; i < row; i++){
            for(ll j = 0; j < col; j++){
                if(arr[i][j] == '.'){
                    row_num[i]++;
                    col_num[j]++;
                }
            }
        }
 
        for(ll i = 0; i < row; i++){
            for(ll j = 0; j < col; j++){
                ll sum = row_num[i] + col_num[j];
                if (arr[i][j] == '.') sum--;
                ans = min(ans, sum);
            }
        }
 
        cout<<ans<<endl;
    }
    return 0;
}
