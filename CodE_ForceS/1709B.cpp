#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t=1;
   // cin>>t;
    while(t--)
    {
        ll n,m;cin>>n>>m;
      //  vector<ll >vc;
        ll arr[n+5];
        ll PremF[n+5];
        ll PremL[n+5];
        for(ll i=1;i<=n;i++)
        {
            ll x;cin>>x;
            arr[i]=x;
        }
        PremF[1]=0;
        PremL[n]=0;
        for(ll i=2;i<=n;i++)
        {
            if(arr[i-1]>arr[i])
            {
                PremF[i]=PremF[i-1]+(arr[i-1]-arr[i]);
            }
            else
            {
                PremF[i]=PremF[i-1];
            }
        }
        for(ll i=n-1;i>=1;i--)
        {
            if(arr[i+1]>arr[i])
            {
                PremL[i]=PremL[i+1]+(arr[i+1]-arr[i]);
            }
            else
            {
                PremL[i]=PremL[i+1];
            }
        }
        
        while(m--)
        {
            ll l,r;cin>>l>>r;
            if(l<r)
            {
                ll ans=(PremF[r]-PremF[l]);
                cout<<ans<<endl;
            }
            else
            {
                ll ans=(PremL[l]-PremL[r]);
                cout<<(-1*ans)<<endl;
            }
        }
    }
    return 0;
}