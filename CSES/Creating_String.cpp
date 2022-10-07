#include<bits/stdc++.h>
#define ll long long int 
#define lli int 
using namespace std;

set<string >st;
void Permutation(string s,string out)
{
	if(s.size()==0)
	{
		st.insert(out);
		return ;
	}
	for(ll i=0;i<(ll)s.size();i++)
	{
		Permutation(s.substr(1),out+s[0]);
		rotate(s.begin(),s.begin()+1,s.end());
	}
	

}
signed main()
{
	string s;cin>>s;
	sort(s.begin(),s.end());
	Permutation(s,"");
	cout<<st.size()<<endl;
	for(auto it:st)
	{
		cout<<it<<endl;
	}

	return 0;
}
