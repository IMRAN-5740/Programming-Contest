#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main ()
{
        int mh,ms,kh,ks;
        cin>>mh>>ms>>kh>>ks;
        int i = 0;
        while(mh > 0 && kh> 0){
            if(i % 2 == 0){
                kh = kh - ms;
            }
            else{
                mh = mh -ks;
            }
            i++;

        }
        if(mh > 0 && kh <= 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    return 0;
}