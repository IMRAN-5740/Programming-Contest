/******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
/*********************_BSMRSTU_**********************/
/*.................MD AMRAN MONDOL................*/
/*..................Dept Of CSE.................*/
/*..........Part-01...........*/

#include<bits/stdc++.h>
using namespace std;

/*..........Part-02...........*/
#define ll                 long long
#define llu                unsigned long long
#define pii                pair<int,int>
#define pll                pair<ll,ll>
#define pil                pair<int,ll>
#define pli                pair<ll,int>
#define vi                 vector<int>
#define vl                 vector<ll>
#define pb                 push_back
#define mp                 make_pair
#define ff                 first
#define ss                 second
#define sz(x)              (int)x.size()
#define all(v)             v.begin(),v.end()
#define rall(v)            v.rbegin(),v.rend()
#define mem(a, b)          memset(a,b,sizeof(a))
#define pi       	       acos(-1.0)
const int N = 2e5 + 5;

/*..........Part-03...........*/
void solve()
    {
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		//ll sum=0;
		// ll mx=0;
		// for(ll i=0;i<n;i++)
		// {
		// 	ll sum=0;
		// 	for(ll j=0;j<n;j++)
		// 	{
		// 		if(arr[i]<=arr[j])
		// 		{
		// 		 sum+=arr[i];
		// 		}
		// 	}
		// 	mx=max(mx,sum);

		// }
		// cout<<mx<<endl;
		ll ans=0;
		sort(arr,arr+n);
		for(ll i=0;i<n;i++)
		{
			ans=max(ans,arr[i]*(n-i)); 
		}
		cout<<ans<<endl;
    }
int main()
{
	ll t=1;
	
	while(t--)
	{
	   solve();
	}

	return 0;
}
