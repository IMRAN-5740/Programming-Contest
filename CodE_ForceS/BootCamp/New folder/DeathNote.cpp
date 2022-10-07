#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
    int n,m,p=0,t;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        t=0;
        p+=a[i];
        if(p>=m)
        {
            t=p/m;
        }
        p-=t*m;
        cout<<t<<" ";
    }
    cout<<endl;
    return 0;
}
