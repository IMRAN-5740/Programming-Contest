// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// vector<ll>vc;
// ll sumo;
// ll sume;
// vector<ll>Pvco;
// vector<ll>Pvce;
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 	//	ll arr[n+1];
// 		for(ll i=1;i<=n;i++)
// 		{
// 			ll  x;
// 			cin>>x;
// 			vc.push_back(abs(x));
// 		}

// 		// for(auto it: vc)
// 		// {
// 		// 	cout<<it<<" ";
// 		// }
// 		//cout<<endl;
// 		Pvco[0]=vc[0];
// 		Pvce[0]=vc[1];
// 		//ll j=1;
// 		for(ll i=2,j=1;i<vc.size();i+=2,j++)
// 		{
// 			Pvco[j]=Pvco[j-1]+vc[i];
// 			//j++;
// 		}
// 		for(int i=0;i<Pvce.size();i++)
// 		{
// 			cout<<Pvce[i]<<" ";
// 		}
// 		cout<<endl;
// 		//ll k=1;
// 		for(ll i=1,k=1;i<vc.size();i+=2,k++)
// 		{
// 			Pvce[k]=Pvce[k-1]+vc[i];
// 			//k++;
// 		}
// 		for(int i=0;i<Pvce.size();i++)
// 		{
// 			cout<<Pvce[i]<<" ";
// 		}
// 		cout<<endl;
// 		// for(auto it:Pvco)

// 		// {
// 		// 	cout<<it<<" ";
// 		// }
// 		// cout<<endl;
// 		// for(auto ct:Pvce)

// 		// {
// 		// 	cout<<ct<<" ";
// 		// }
// 		// cout<<endl;
// 		vc.clear();
// 		Pvce.clear();
// 		Pvco.clear();
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		ll sum=0;
		cin>>n;
		vector<ll>arr(n),a,b;
		ll x;
		// for(int i=0;i<n;i++)
		// {
		// 	cin>>x;
		// }
		for(auto & X:arr)
		{
			cin>>X;
		}

		for(int i=0;i<n;i++)
		{
			if(i&1)
			{
				a.push_back(abs(arr[i]));
			}
			else
			{
				b.push_back(abs(arr[i]));
			}
			
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		ll len=a.size();
		ll len1=b.size();
		if(a[len-1]>b[0])
		{
			swap(a[len-1],b[0]);
		}
		for(auto it: b)
		{
			sum+=it;
		}
		for(auto it: a)
		{
			sum-=it;
		}
		cout<<sum<<endl;
		sum=0;

	}
	return 0;
}