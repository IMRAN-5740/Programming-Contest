#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;

	    if(a>b&&a>c)
	    {
	        if(b>=c)
	        {
	            cout<<b<<endl;
	        }
	        else
	        {
	            cout<<c<<endl;
	        }
	       
	    }
	    else if(b>a&&b>c)
	    {
	        if(a>=c)
	        {
	            cout<<a<<endl;
	        }
	        else
	        {
	            cout<<c<<endl;
	        }
	        
	    }
	    else if(c>a&&c>b)
	    {
	        if(a>=b){
	            cout<<a<<endl;
	        }
	        else
	        {
	            cout<<b<<endl;
	        }
	        
	    }
	}
	return 0;
}
