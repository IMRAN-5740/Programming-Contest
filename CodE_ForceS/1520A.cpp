#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	    string s;
	    cin>>s;
	    int ans=0,gg=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i]!=s[i+1])
	        {
	            for(int j=i+2;j<n;j++)
	            {
	                if(s[i]==s[j])
	                {
	                    ans=1;
	                    break;
	                }
	            }
	        }
	    }
	    if(ans==0)
	    	{
	    		cout<<"YES"<<endl;
	    	}
	    else 
	    	{
	    		cout<<"NO"<<endl;
			}

	}
	return 0;
}