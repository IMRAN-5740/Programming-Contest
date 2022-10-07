#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,j,n,k,i;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>n>>k;
        int a[n+10];
        int b[n*k+10];
        for( i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int m=0;
        for ( i=0; i<k; i++)
        {
            for ( j=0; j<n; j++)
            {
                b[m]=a[j];
                cout<< b[m] <<" ";
                m++;
            }
        }
        cout<<"\n";
        for( i=0; i<(n*k)-1; i++)
        {
            for(j=i+1; j<n*k; j++)
            {
                if (b[i]>b[j])
                {
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
