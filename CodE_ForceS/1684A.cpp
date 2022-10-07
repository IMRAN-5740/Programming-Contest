#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		//cin>>s;
		s=to_string(n);
		sort(s.begin(),s.end());
		vector<ll>vec;
		// for(ll i=0;i<s.size();i++)
		// {
		// 	vec.push_back(s[i]-'0');
		// }
		//sort(vec.begin(),vec.end());
		//cout<<s<<endl;
		// for(int i=0;i<vec.size();i++)
		// {
		// 	cout<<vec[i]<<" ";
		// }
		//cout<<endl;
		if(s.size()==2)
		{
			cout<<s[1]<<endl;
		}
		else 
		{
			cout<<s[0]<<endl;
		}
		
		//s.empty();
	}
	return 0;
}
