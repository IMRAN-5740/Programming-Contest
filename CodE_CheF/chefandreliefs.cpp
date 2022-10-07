// // // #include<bits/stdc++.h>
// // // #define ll long long int
// // // using namespace std;
// // // int main()
// // // {
// // // 	ll t;
// // // 	cin>>t;
// // // 	while(t--)
// // // 	{
// // // 		ll  n,k;
// // // 		cin>>n>>k;
// // // 		ll arr[n+1];
// // // 		ll arr1[n+1];
// // // 		ll j=1;
// // // 		for(ll i=0;i<=n-1;i++)
// // // 		{
// // // 			arr[i]=j;
// // // 			j++;
// // // 		}
		
// // // 		while(k--)
// // // 		{
// // // 			ll z=0;
// // // 			j=1;
// // // 			for(ll i=0;i<=n-1;i++)
// // // 			{
// // // 				if(i<(n/2))
// // // 				{
// // // 					arr1[i]=arr[z];
// // // 					z=z+2;
// // // 				}
// // // 				else
// // // 				{
// // // 					arr1[i]=arr[j];
// // // 					j=j+2;
// // // 				}
				
// // // 			}
		
// // // 		for(ll i=0;i<=n-1;i++)
// // // 		{
// // // 			arr[i]=arr1[i];
// // // 		}
// // // 	}

// // // 		for(ll i=0;i<=n-1;i++)
// // // 		{
// // // 			cout<<arr[i]<<" ";
// // // 		}
// // // 		cout<<endl;
// // // 	}
// // // 	return 0;
// // // }

// // // // //
// 1 2 3 4
// 1 3 2 4
// 1 2 3 4

// 1 2 3 4 5 6
// 1 3 5 2 4 6
// 1 5 4 3 2 6
// 1 4 2 5 3 6
// 1 2 3 4 5 6

// 1 2 3 4 5 6 7 8
// 1 3 5 7 2 4 6 8
// 1 5 2 6 3 7 4 8
// 1 2 3 4 5 6 7 8

// 1 2 3 4 5 6 7 8 9 10
// 1 3 5 7 9 2 4 6 8 10
// 1 5 9 4 8 3 7 2 6 10
// 1 9 8 7 6 5 4 3 2 10
// 1 8 6 4 2 9 7 5 3 10
// 1 6 2 7 3 8 4 9 5 10
// 1 2 3 4 5 6 7 8 9 10

// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 3 5 7 9 11 2 4 6 8 10 12
// 1 5 9 2 6 10 3 7 11 4 8 12
// 1 9 6 3 11 8 5 2 10 7 4 12
// 1 6 11 5 10 4 9 3 8 2 7 12
// 1 11 10 9 8 7 6 5 4 3 2 12
// 1 10 8 6 4 2 11 9 7 5 3 12
// 1 8 4 11 7 3 10 6 2 9 5 12
// 1 4 7 10 2 5 8 11 3 6 9 12
// 1 7 2 8 3 9 4 10 5 11 6 12
// 1 2 3 4 5 6 7 8 9 10 11 12


// // #include<bits/stdc++.h>
// // #define ll long long int
// // using namespace std;
// // int main()
// // {
// // 	ll t;
// // 	cin>>t;
// // 	for(ll i=1;i<=t;i++)
// // 	{
// // 		ll n,k;
// // 		cin>>n>>k;
// // 		ll arr[n+1];
// // 		ll zrr[n+1];
// // 		for(ll i=1;i<=n;i++)
// // 		{
// // 			arr[i]=i;
// // 		}
// // 		for(ll i=0;i<k;i++)
// // 		{
// // 			ll first=1;
// // 			ll second=2;
// // 			ll arrpoint=1;
// // 			while(arrpoint<=n)
// // 			{
// // 				if(arrpoint<=n/2)
// // 				{
// // 					zrr[arrpoint]=arr[first];
// // 					first+=2;
// // 				}
// // 				else
// // 				{
// // 					zrr[arrpoint]=arr[second];
// // 					second+=2;
// // 				}
// // 				arrpoint++;
// // 			}
// // 			if(i!=k-1)
// // 			{
// // 				for(ll si=0;si<n;si++)
// // 				{
// // 					arr[si]=zrr[si];
// // 				}
// // 			}
// // 		}
// // 		for(ll i=1;i<=n;i++)
// // 		{
// // 			cout<<zrr[i]<<" ";
// // 		}
// // 		cout<<"\n";
// // 	}
// // 	return 0;
// // }
// #include <iostream>
// #include<vector>
// using namespace std;
// int main() 
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         vector<int>v(n+1);
//         int arr[n+1][31];
//         int j=1;
//         for(int i=1;i<=n;i+=2)
//              arr[i][0]=j++;
//         for(int i=2;i<=n;i+=2)
//              arr[i][0]=j++;
//         for(int j=1;j<=30;j++)
//         {
//             for(int i=1;i<=n;i++)
//                 arr[i][j]=arr[arr[i][j-1]][j-1];
//         }
//         vector<int>a(n+1);
//         for(int j=1;j<=n;j++)
//         {
//             int temp=k;
//             int p=j;
//             for(int i=0;i<=30;i++)
//             {
//                 if(1<<i&temp)
//                     p=arr[p][i];
//             }
//             a[p]=j;
//         }
//         for(int i=1;i<=n;i++)
//             cout<<a[i]<<" ";
//         cout<<'\n';
//     }
// }
#include <bits/stdc++.h>
using namespace std;

#define sync {ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define rep(n) for(int i = 0;i<n;i++)
#define rep1(a,b) for(int i = a;i<b;i++)
#define int long long int
#define mod 1000000007

int n, k;

void solve()
{
    cin>>n>>k;
    vector<int> next(n+1, 0);
    vector<int> ans(n+1, 0);
    vector<bool> vis(n+1, false);

    for (int i = 1; i <= n; i++) {
        if(i%2){
            next[i/2 + 1] = i;
        }
        else{
            next[i/2 + n/2] = i;
        }
    }

    for(int i = 1; i<=n; i++){
        if(!vis[i]){
            vector<int> cycle;
            int curr = i;
            vis[curr] = true;
            cycle.push_back(curr);
            while(next[curr] != i){
                curr = next[curr];
                vis[curr] = true;
                cycle.push_back(curr);
            }
            int cycle_len = cycle.size();
            for(int j = 0; j<cycle_len; j++){
                ans[cycle[j]] = cycle[(j+k)%cycle_len];
            }
        }
    }

    for(int i = 1; i<=n; i++){
        cout<<ans[i]<<' ';
    }
}

int32_t main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    sync;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}