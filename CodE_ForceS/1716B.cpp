#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         ll arr[n+1];
         cout<<n<<endl;

        for(ll i=1;i<=n;i++) 
        {
            arr[i]=i;
            cout<<i<<" ";
        }
        cout<<endl;
            for(ll i=2;i<=n;i++)
            {
                 swap(arr[i],arr[i-1]);
                 for(ll j=1;j<=n;j++)  
                    {
                        cout<<arr[j]<<" ";
                    }
                    puts("");
            }
    }
    return 0;
}