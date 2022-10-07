#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n+3];
        for(int i=0;i<n;i++)
        	{
        		cin>>s[i];
        	}
        int ans=0;
        map<string,int>mp,mp1;
        for(int i=0;i<n;i++)
        {
            string a=s[i];
            string b,c;
            b=a;
 
            reverse(b.begin(),b.end());
            c=b;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            mp[a]++;
 
            a.pop_back();
            mp1[a]++;
 
            c.pop_back();
 
            //cout<<a<<" "<<b<<" "<<c<<endl;
 
            if(a==b || mp[b]!=0 || mp[c]!=0 || mp1[b]!=0)
            {
                ans=1;
                break;
            }
 
        }
        if(ans==1)
        {
        	cout<<"YES"<<endl;
        }
        else
        {
        	cout<<"NO"<<endl;
        } 
    }
}