// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// //	cin>>t;
// 	while(t--)
// 	{
// 		ll n,q;cin>>n>>q;
// 		vector<ll>vc;
// 		for(ll i=0;i<n;i++)
// 		{
// 			ll m;cin>>m;
// 			vc.push_back(m);
// 		}
// 		while(q--)
// 		{
// 			ll tt;cin>>tt;
// 			if(tt==1)
// 			{
// 				ll pi,pv;cin>>pi>>pv;
// 				pi--;
// 				vc[pi]=pv;
// 				ll sum=0;
// 				ll psum[n+5];
// 				psum[0]=vc[0];
// 				for(ll i=1;i<n;i++)
// 				{
// 					psum[i]=psum[i-1]+vc[i];
// 				}
// 				cout<<psum[n-1]<<endl;
// 			}
// 			else if(tt==2)
// 			{
// 				ll  pv;cin>>pv;
// 				ll rsum=vc.size()*pv;
// 				for(ll i=0;i<n;i++)
// 				{
// 					vc[i]=pv;
// 				}
// 				//ll rsum=0;
				
// 				cout<<rsum<<endl;
// 			}
// 		}

// 	}
// 	return 0;
// }


#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n+4];
    map<ll,ll>mp1;
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    ll up=-1;
    while(q--)
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            ll i,x;
            cin>>i>>x;
            if(up==-1)
            {
                if(x>=ar[i])sum+=(x-ar[i]);
                else sum-=(ar[i]-x);
                ar[i]=x;
                cout<<sum<<endl;
            }
            else
            {
                ll z;
                if(mp1[i]==0)z=up;
                else z=mp1[i];
                if(x>=z)sum+=x-z;
                else sum-=z-x;
                cout<<sum<<endl;
                mp1[i]=x;
            }
        }
        else
        {
            ll x;
            cin>>x;
            cout<<x*n<<endl;
            sum=x*n;
            mp1.clear();
            up=x;
        }
    }
    return 0;
}
