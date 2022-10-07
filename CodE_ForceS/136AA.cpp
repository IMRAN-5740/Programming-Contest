#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int x[n+1];
    for(int i =1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        x[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;

}