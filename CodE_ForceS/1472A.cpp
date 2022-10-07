#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll h,w,n;
                cin>>h>>w>>n;
                ll total=1;
                while(h%2==0){
                    total*=2;
                    h/=2;
                }
                while(w%2==0){
                    total*=2;
                    w/=2;
                }
                if(total>=n) cout<<"YES"<<"\n";
                else cout<<"NO"<<"\n";
	}
	return 0;
}