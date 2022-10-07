#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a=0,b=0,c=0 ; 
    	string s; cin >> s ; 
    	int n = s.size() ; 
    		for (int i=n-1;i>=0;i--)
    		{
        	a += (s[i]=='A') ; 
        	b += (s[i]=='B') ; 
        	c += (s[i]=='C') ; 
    		}
    	string ans = "YES" ; 
 
    if (n&1) ans = "NO" ; 
    if (b < a) ans = "NO" ; 
    b -= a ; 
    if (b != c) ans = "NO" ; 
    cout << ans << "\n" ;
	}
	return 0;
}