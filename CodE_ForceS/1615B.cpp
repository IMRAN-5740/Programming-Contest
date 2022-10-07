// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll arr[2000005];
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll l,r;
// 		cin>>l>>r;
// 		ll range=r-l+1;
// 		ll j=0;
// 		for(ll i=l;i<=r;i++)
// 		{
// 			arr[j]=i;
// 			j++;
// 		}
// 		// for(int i=1;i<=range;i++)
// 		// {
// 		// 	cout<<arr[i]<<" ";
// 		// }
// 		// cout<<endl;
// 		map<ll,ll>one,zero;
// 		for(ll i=0;i<range;i++)
// 		{
// 			ll x=arr[i];
// 			for(ll j=0;j<20;j++)
// 			{
// 				if(x&1)
// 				{
// 					one[j]++;
// 				}
// 				else
// 				{
// 					zero[j]++;
// 				}
// 				x=(x>>1);
// 			}
// 		}
// 		// int x=arr[0];
// 		// for(int i=1;i<range;i++)
// 		// {
// 		// 	x=x&arr[i];
// 		// }
// 		// cout<<x<<endl;
// 		ll ans[20];
// 		//cout<<one[4]<<" "<<zero[4];
// 		ll k=0;
// 		for(ll i=0;i<20;i++)
// 		{
// 			//if(one[i]>zero[i])
// 			{
// 				ans[k]=range-one[i];
// 				k++;
// 			}
// 		}
// 		ll res=ans[0];
// 		for(int i=1;i<20;i++)
// 		{
// 			res=min(res,ans[i]);
// 		}
// 		cout<<res<<endl;
// 	}
// 	return 0;

// }
#include<bits/stdc++.h>
#define ll          long long 
#define FASTID      ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
using namespace std;


ll pref[200005][31];
void pre_calculate()
{
    ll N=2e5 + 5;
    for(ll i=1;i<N;i++)
    {
        for(int j=0;j<=30;j++)
        {
            if(i&(1<<j)) pref[i][j]=1;
            pref[i][j]+=pref[i-1][j];
        }
    }
}
// void solve()
// {
//    ll l,r;
//    cin>>l>>r;
 
//    ll total=r-l+1;
//    ll ans=1e10;
//    for(int j=0;j<=30;j++)
//    {
//       ll curr=(pref[r][j]-pref[l-1][j]);
//       ans=min(ans,total-curr);
//    }
//    cout<<ans<<endl;
// }
 
int main()
{
  FASTID;
  pre_calculate();
  int t=1;
  cin>>t;
  while(t--)
  {
   // solve();
    ll l,r;
   cin>>l>>r;
 
   ll total=r-l+1;
   ll ans=1e10;
       for(int j=0;j<=30;j++)
       {
          ll curr=(pref[r][j]-pref[l-1][j]);
          ans=min(ans,total-curr);
       }
   cout<<ans<<endl;
  }
  return 0;
}