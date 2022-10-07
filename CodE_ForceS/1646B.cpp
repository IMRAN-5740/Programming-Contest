#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	
   int t;
   cin>>t;
     while(t--)
     {
     	ll n;
     	cin>>n;
     	int a[n];
     	for(int i=0;i<n;i++)
     	{
     		cin>>a[i];
     	}
     	sort(a,a+n);
     	vector<ll> v;
     	vector<ll> v2;
     	ll s=a[0],ss=0,f=0;
      	for(int i=1;i<=n/2;i++)
     	{
     		s=s+a[i];
     	   v.push_back(s);
     	}
     		for(int i=n-1;i>n/2;i--)
	     	{
	     		ss=ss+a[i];
	     	   v2.push_back(ss);
	     	}
     	for(int i=0;i<v2.size();i++)
     	{
     		if(v[i]<v2[i]) { f=1; break;}
     	}
     	if(f==1)
     cout<<"YES"<<endl;
     	else cout<<"NO"<<endl;

     }


   return 0;


}

// #include<bits/stdc++.h>
// #define ll long long
// const int N =1e5+5;
// using namespace std;
// int main()
// {
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//     ll n;
//     cin>>n;
//     ll arr[n+1];
//     for(ll i=1;i<=n;i++)
//     {
//       arr[i]=rand()%107;
//     }
//      for(ll i=1;i<=n;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;


//     sort(arr+1,arr+1+n);
//     for(ll i=1;i<=n;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }