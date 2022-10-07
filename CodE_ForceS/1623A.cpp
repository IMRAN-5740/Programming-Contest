#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int res1=0,res2=0,res3=0,res4=0;
    while (t--) 
    {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;
        
        if(rb<=rd)
        {
        	res1=rd-rb;
        }
        else
        {
        	res1=2*n-rb-rd;
        }
        if(cb<=cd)
        {
        	res2=cd-cb;
        }
        else
        {
        	res2=2*m-cb-cd;
        }
        res3=min(res1,res2);
        cout<<res3<<endl;
    }
    return 0;
}