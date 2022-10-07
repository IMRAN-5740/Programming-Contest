// // #include<bits/stdc++.h>
// // #define ll long long int
// // using namespace std;

// // int main()
// // {
// // 	ll t=1;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		int n;
// //         cin>>n;
// //         int ar[n+4];
// // //         int mx=0;
// // //         int ind=0;
// // //         for(int i=0;i<n;i++)
// // //         {
// // //             cin>>ar[i];
// // //             if(ar[i]>mx)
// // //             {
// // //                 mx=ar[i];
// // //                 ind=i;
// // //             }
// // //         }
// // //         int ans=0;
// // //         for(int i=ind+1;i<n;i++)
// // //         {
// // //             if(ar[i]>ar[i-1])
// // //             {
// // //                 ans=1;
// // //                 break;
// // //             }
// // //         }
// // //         for(int i=ind-1;i>=0;i--)
// // //         {
// // //             if(ar[i]>ar[i+1])
// // //             {
// // //                 ans=1;
// // //                 break;
// // //             }
// // //         }
// // //         if(ans==1)cout<<"NO"<<endl;
// // //         else cout<<"YES"<<endl;

// // // 	}
// // // 	return 0;
// // // }
// // #include<bits/stdc++.h>
// // #define ll long long int
// // using namespace std;

// // int main()
// // {
// //     ll t=1;
// //     cin>>t;
// //     while(t--)
// //     {
// //         ll n;
// //         cin>>n;
// //         ll val=0;
// //         ll cnt=0;
// //         ll i=1;
// //         while(val<n)
// //         {
// //             val+=i;
// //             i+=2;
// //             cnt++;
// //         }
// //         cout<<cnt<<endl;
// //     }
// //     return 0;
// // }
// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     ll t=1;
//     cin>>t;
//     while(t--)
//     {
//        ll n;
//        cin>>n;
//        vector<ll>vc;
//        map<ll,ll>mp;
//        for(ll i=0;i<n;i++)
//        {
//             ll x;
//             cin>>x;
//             vc.push_back(x);
//             mp[x]++;
//        }
//        ll mx=INT_MIN;
//        ll res=0;
//        for(auto it:mp)
//        {
//             if(it.second>mx)
//             {
//                 mx=max(mx,it.second);
//               //  res=it.first;
//             }
             
//         }

//       // sort(vc.begin(),vc.end());
//         ll cnt=0;
//         for(auto itt:mp)
//         {
//             if(itt.second==mx)
//             {
//                 cnt++;
//                 //break;
//             }
            
//         }
//         if(cnt==1)
//         {
//             cout<<"YES"<<endl;
//         }
//         else  cout<<"NO"<<endl;
       
//     }
//     return 0;
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
        ll n;
        cin>>n;
        ll res=__builtin_popcount(n)-1;
        cout<<res<<endl;
    }
    return 0;
}