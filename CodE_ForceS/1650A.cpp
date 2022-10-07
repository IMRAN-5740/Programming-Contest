#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c;
        cin>>c;
        int x=0;
        for(int i=0;i<s.length();i+=2)
        {
            if(s[i]==c) x=1;
        }
        if(x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}