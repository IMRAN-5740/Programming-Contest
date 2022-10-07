#include<bits/stdc++.h>
#define llu long long int
using namespace std;
int main()
{
    llu i,n,p;
    cin>>n;
    if (n & 1)
    {
        p=n/2+1;
    }
    else
        p=n/2;
    cout<<p;
    return 0;
}