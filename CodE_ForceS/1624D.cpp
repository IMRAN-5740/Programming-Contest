#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		map<char,int> mp;
		for(int i=0;i<n;i++)
		{
			mp[s[i]]++;
		}
		int p=0,ind=0;
        for(auto it:mp)
        {
            int x=it.second;
            p=p+x/2;
            ind+=(x%2);
        }
        int ans=p/k;
        ind+=(p%k)*2;
        ans=ans*2;
        if(ind>=k)
        	{
        		ans++;
        	}
        cout<<ans<<endl;
	}
	return 0;
}
