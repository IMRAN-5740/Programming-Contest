// /******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
// /*********************_BSMRSTU_**********************/
// /*.................MD AMRAN MONDOL................*/
// /*..................Dept Of CSE.................*/
// /*..........Part-01...........*/

// #include<bits/stdc++.h>
// using namespace std;

// /*..........Part-02...........*/
// #define ll                 long long
// #define llu                unsigned long long
// #define pii                pair<int,int>
// #define pll                pair<ll,ll>
// #define pil                pair<int,ll>
// #define pli                pair<ll,int>
// #define vi                 vector<int>
// #define vl                 vector<ll>
// #define pb                 push_back
// #define mp                 make_pair
// #define ff                 first
// #define ss                 second
// #define sz(x)              (int)x.size()
// #define all(v)             v.begin(),v.end()
// #define rall(v)            v.rbegin(),v.rend()
// #define mem(a, b)          memset(a,b,sizeof(a))
// #define pi       	       acos(-1.0)

// /*..........Part-03...........*/

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
//         int n,k;
//         cin>>n>>k;
        
//         int cnt=0;
//         if(n%2==0)
//             cnt=n/2;
//         else 
//         	cnt=(n/2)+1;
 
//         int cnt1=1;
 
//         if(n==1 && k==1)cout<<"R"<<endl;
//         else if(k>cnt)cout<<"-1"<<endl;
//         else {
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 if(i==j && k>0 && i==cnt1)
//                 {
//                     cout<<"R";
//                     k--;
//                     cnt1+=2;
//                 }
//                 else cout<<".";
 
//             }
//             cout<<endl;
//         }
//     }
//  }
// 	//Drive Code Here//

// 	return 0;
// }
