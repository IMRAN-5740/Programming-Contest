#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,l;
    set<int>s;
    cin>>n>>m;
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=n;i>=1;i--){
        s.insert(a[i]);
        b[i]=s.size();
    }
    for(i=1;i<=m;i++){
        cin>>l;
        cout<<b[l]<<endl;
    }
    return 0;
}