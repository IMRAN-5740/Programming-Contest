#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		//vector<vector<int>>g(node+1,vector<int>(node+1,0))
		ll h,w;
		cin>>h>>w;
		ll arr[h+1][w+1];
		for(ll i=1;i<=h;i++)

		{
			for(ll j=1;j<=w;j++)
			{
				cin>>arr[i][j];
			}
		}

		///cout<<endl;
		for(ll i=1;i<=w;i++)
		{
			for(ll j=1;j<=h;j++)
			{
				cout<<arr[j][i]<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}