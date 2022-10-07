#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll a[n+4]={0};
		cout << 2 << endl;

		  for (int i = 1; i <= n; ++i)
		  {
		    if (a[i] !=1)
		    {
		      for (int j = i; j <= n; j = j * 2)
		      {
		        cout << j << " ";
		        a[j] = 1;
		      }
		    }
		  }
		  cout<<endl;
	}
	return 0;
}