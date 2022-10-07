#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 2e5 + 5;
ll a[N],r[N],adr[2];
int n,m;
void bs(ll r)
{
    int l = 1, h = n, mid;
    while(l<=h){
        mid = (l + h) / 2;
        if(r <= a[mid] && r > a[mid - 1])
        {
            adr[0] = mid;
            adr[1] = r - a[mid - 1];
            break;
        }
        else if (r > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
    }
    for(int i=1;i<=m;i++)
    {
   		cin>>r[i];
        bs(r[i]);
        cout<<adr[0]<<" "<<adr[1]<<endl;
    }
    return 0;
}
