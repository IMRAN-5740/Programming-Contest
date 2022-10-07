#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=0;
        sum=a+b+c;
        if(sum>1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}