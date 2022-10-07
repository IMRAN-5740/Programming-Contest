#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		
		set<int>s;

		int diff=abs(a-b);

		for(int i=1;i*i<=diff;i++)
		{
			if(diff%i==0)
			{
				s.insert(i);
				s.insert((diff/i));
			}
		}

		cout<<s.size()<<endl;

	}
	return 0;
}