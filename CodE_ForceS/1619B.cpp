// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll arr[100000000];
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	ll cnt=0;
// 	while(t--)		
// 	{
// 		ll n;
// 		cin>>n;
// 		for(ll i=1;i<=n;i++)
// 		{
// 			arr[i]=i;
// 		}

// 		for(ll i=1;i<=n;i++)
// 		{
// 			ll x=i*i;
// 			ll y=i*i*i;
// 			for(ll j=1;j<=n;j++)
// 			{
// 				if(((x==arr[j]) || (y==arr[j])) and ((x<=n)||(y<=n)))
// 				{
// 					cnt++;
// 				}
// 			}
			
// 		}
// 		cout<<cnt<<endl;

// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int count(int N)
{
	int res = (int)sqrt(N) + (int)cbrt(N)-(int)(sqrt(cbrt(N)));

	return res;
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x=count(n);
		cout<< x<<endl;
	}
	return 0;
}