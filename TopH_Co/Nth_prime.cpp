#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=7368788;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p; i<=n; i+=p)
                prime[i]=false;
        }
    }
    int a,j=0,p;
    cin>>a;
    for(p=2;; p++)
    {
        if(prime[p])
            j++;
        if(j==a)
        {
            cout<<p<<endl;
            break;
        }
    }
}
