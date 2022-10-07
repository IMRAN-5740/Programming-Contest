// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		ll cnt=0;
// 		map<char,ll>mp;
// 		vector<ll>vc;
// 		for(ll i=0;i<n;i++)
// 		{
// 			if(s[i]=='c')
// 			{
// 				cnt++;
// 			}
// 		}
// 		for(ll i=0;i<n;i++)
// 		{
// 			if(s[i]!='c')
// 			{
// 				mp[s[i]]++;
// 			}
			
// 		}
// 		for(auto it : mp)
// 		{
// 			//cout<<it.first<<" "<<it.second<<endl;
// 			ll val=it.second;
// 			ll res=abs(val/2)+(val%2);
// 			vc.push_back(res);

// 		}
// 		ll sum=0;
// 		for(int i=0;i<vc.size();i++)
// 		{
// 			//cout<<vc[i]<<" ";
// 			sum=sum+vc[i];

// 		}
// 	//	cout<<endl;

// 		cnt=cnt+sum;
// 		cout<<cnt<<endl;
// 		cnt=0;
// 		sum=0;
// 		vc.clear();

// 	}
// 	return 0;
// }
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
		string s;
		cin>>s;
		int i=0;
		int cnt=0;
		while(i<n)
		{
			if(s[i]==s[i+1])
			{
				cnt+=1;
				i+=2;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}