#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,temp1,temp2;
    cin>>n>>m;
    int a[m],max=0;
    set<int>s;
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    for(int i=0;(i+n)<=m;i++)
    {
        s.insert(a[i+n-1]-a[i]);
    }
    cout<<*s.begin();
    return 0;
}
