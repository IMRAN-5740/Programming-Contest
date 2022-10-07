// // #include<bits/stdc++.h>
// // #define ll long long int
// // using namespace std;

// // int main()
// // {
// // 	ll t=1;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		ll n,x;
// // 		cin>>n>>x;
// // 		//vector<ll>vc,vc1;
// // 		ll arr[n+1];
// // 		for(ll i=1;i<=n;i++)
// // 		{
// // 			ll p;
// // 			cin>>p;
// // 			arr[i]=p;
// // 			//vc1.push_back(p);
// // 		}	
// // 		ll cnt=0;
// // 		for(ll i=1;i<=x;i++)
// // 		{
// // 			if(arr[i]!=i)
// // 			{
// // 				cnt++;
// // 			}
			
// // 		}
// // 		cout<<cnt<<endl;
// // 	}
// // 	return 0;
// // }

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
// 	ll t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n,x,y,k;
//     	cin>>n>>k;
//         ll a[n+3];
//         for(ll i=1;i<=n;i++) 
//         	{
//         		cin>>a[i];
//         	}
//         vector<int>v(n+3,0);
//         ll cnt=0;
//         for(ll i=1;i<=k;i++)
//         {
//             v[a[i]]++;
//         }
//         for(ll i=1;i<=k;i++)
//         {
//         	 if(v[i]==1)
//         	 {
//         	 	cnt++;
//         	 }
//         }
//         ll res=k-cnt;
//         cout<<res<<endl;
//     }
	
// 	return 0;
// }
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
        if (n % 2 == 0)
    {
        int temp = 2;
        while (temp <= n)
        {
            cout << temp << " " << temp - 1 << " ";
            temp += 2;
        }
        cout << endl;
      //  return;
    }
    else
    {
        cout << 1 << " ";
        int temp = 3;
        while (temp <= n)
        {
            cout << temp << " " << temp - 1 << " ";
            temp += 2;
        }
        cout << endl;
    }
    }
    return 0;
}