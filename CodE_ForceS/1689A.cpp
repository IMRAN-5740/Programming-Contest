#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
	ll n,m,k;	 cin>>n>>m>>k;
	string a,b;  cin>>a>>b;

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	ll pos_A=0;
	ll pos_B=0;
	ll i=0,j=0;

	string c;
	while(1)
	{
		if(pos_A<k and pos_B<k)
		{


			if(a[i]<=b[j])
			{
				c.push_back(a[i]); 
				pos_A++;
				pos_B=0;
				i++;
			}
			else
			{
				c.push_back(b[j]);
				pos_B++;
				pos_A=0;
				j++;
			}
		}
		else if(pos_A<k)
		{
				c.push_back(a[i]); 
				pos_A++;
				pos_B=0;
				i++;
		}
		else if(pos_B<k)
		{
				c.push_back(b[j]);
				pos_B++;
				pos_A=0;
				j++;
		}
		if(i==a.size() or j==b.size()) break;
	}
	for(ll i=0;i<c.size();i++)
	{
		cout<<c[i];
	}
	cout<<endl;

}

int main()
{
	ll t;
	cin>>t;
	while(t--)

	{
		solve();
	}
	return 0;
}