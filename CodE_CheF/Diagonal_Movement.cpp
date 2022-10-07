#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll x,y;
    cin>>x>>y;
    ll res=x+y;
    if(res%2==0)
    cout<<"YES\n";
    else 
    cout<<"NO\n";
  }
  return 0;
}
//#define fr(i, a, b) for (ll i = a; i < b; i++)
//ll const N = 1e6;