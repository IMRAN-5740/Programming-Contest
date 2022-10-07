#include<iostream>
using namespace std;
#define ll long long int


int main()
{
    ll l;
    cin>>l;
    while(l--)
    {
        ll n;
        cin>>n;
        ll f=1;
        for(ll i=2;i<=n;i++)
        {
            f*=i;
        }
        cout<<(n*(n-1)*f)/2<<endl;
    }
}
