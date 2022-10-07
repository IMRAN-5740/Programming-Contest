#include<bits/stdc++.h>
#define ll long long
#define llu unsigned  long long 
using namespace std;
int main() 
{
    ll  T;
    cin>>T;
    while(T--)
    {
        ll r,n,count=0;
        cin>>n;

        while(n!=0)
        {
            r=n%10;
            if(r==4)
            {
            count++;
            }
            n=n/10;
        }
        cout<<count<<endl;
    }
	return 0;
}
