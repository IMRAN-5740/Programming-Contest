#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,m,pv =-1,c=0;
        cin>>n>>b>>m;
        for(int i=1;i<=m;i++)
        {
            int cv;
            cin>>cv;
            int x =(cv+b)/b;
            if(pv != x)
            {
                c++;
                pv = x;  
            }
        }
        cout<<c<<endl;        
   }
return 0;
}