#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;

   for(ll i=1; i<=t; i++){
        ll m,n,ans;
        cin>>m>>n;

        if(m==1||n==1)
        {
                ans=max(m,n);
        }
        else if(m==2||n==2)
        {
             ans=max(m,n);
            if(ans%4==2)ans+=2;
           else if(ans%4==1||ans%4==3)ans++;
        }
        else if((m*n)%2)ans=((m*n)/2)+1;
        else ans=(m*n)/2;
        printf("Case %lld: %lld\n",i,ans);
    }
}
//
