#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for (ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    // for (ll i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    ll  cnt,s1=0,s2=0;
    cnt=n/2;
    for(ll j=0;j<n;j++){
            if(j+1<=cnt){
                s1+=arr[j];
            }
            else
                s2+=arr[j];
    }
    ll res=(s1*s1)+(s2*s2);
    cout<<res<<endl;
    return 0;
}