#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0,pos=0;
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=0)
                {
                    pos=i;
                }
            }
            cout<<pos<<endl;
        }
  }
    return 0;
}