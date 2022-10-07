#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		//sort(s.begin(),s.end());
		if(s.size()%2==0)
		{
			ll sum=0;
			for(ll i=0;i<s.size();i++)
			{
				sum+=(s[i]-96);
			}
			cout<<"Alice ";
			cout<<sum<<endl;
		}
		else
		{
			ll sum=0;
			for(ll i=0;i<s.size();i++)
			{
				sum+=(s[i]-96);
			}
			ll val=sum-(s[0]-96);
			ll val2=sum-(s[s.size()-1]-96);
			ll res=max(val,val2);
			ll rem=sum-res;
			if(res>rem)
			{
				cout<<"Alice "<<(res-rem)<<endl;
			}
			else
			{
				cout<<"Bob "<<(rem-res)<<endl;
			}
		}
	}
	return 0;
}