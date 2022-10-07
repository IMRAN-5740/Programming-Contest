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
		cin>>n;
		ll arr[4][4];
		for(ll i=1;i<=3;i++)
		{
			for(ll j=1;j<=3;j++)
			//int r,g,b;
			//cin>>r>>g>>b;
			cin>>arr[i][j];
		}
		ll res=0;
		if(((arr[1][1]+arr[1][2]+arr[1][3])==n) and((arr[1][1]+arr[2][1]+arr[3][1])==n) and ((arr[1][2]+arr[2][2]+arr[3][2])==n)and ((arr[1][3]+arr[2][3]+arr[3][3])==n) and ((arr[2][1]+arr[2][2]+arr[2][3])==n) and ((arr[3][1]+arr[3][2]+arr[3][3])==n) )
		{
			
			if((arr[1][1]==n and arr[1][2]==0 and arr[1][3]==0 )and (arr[2][1]==0 and arr[2][2]==n and arr[2][3]==0 ) and (arr[3][1]==0 and arr[3][2]==0 and arr[3][3]==n ))
			{
				cout<<res<<endl;
				continue;
			}
			
				ll mk1=arr[1][2]+arr[1][3]+arr[2][3];
				ll mk2=arr[2][1]+arr[3][1]+arr[3][2];
					// if (arr[1][1]==arr[2][2] ||arr[1][1]==arr[2][3] || arr[1][1]==arr[3][2] || arr[1][1]==arr[3][3]) 
					// {
					// 	res=res+arr[1][1];
						
					// }
					//  if (arr[1][2]==arr[2][2] ||arr[1][2]==arr[2][3] || arr[1][2]==arr[3][1] || arr[1][2]==arr[3][3]) 
					// {
					// 	res=res+arr[1][2];
						
					//}
					//  if (arr[1][3]==arr[2][1] ||arr[1][3]==arr[2][2] || arr[1][3]==arr[3][1] || arr[1][3]==arr[3][2]) 
					// {
					// 	res=res+arr[1][3];
						
					// }
					//  if (arr[2][1]==arr[1][2] ||arr[2][1]==arr[1][3] || arr[2][1]==arr[3][2] || arr[2][1]==arr[3][3]) 
					// {
					// 	res=res+arr[2][1];
						
					// }
					//  if (arr[2][2]==arr[1][1] ||arr[2][2]==arr[1][3] || arr[2][2]==arr[3][1] || arr[2][2]==arr[3][3])
					// {
					// 	res=res+arr[2][2];
						
					// }
					//  if (arr[2][3]==arr[1][1] ||arr[2][3]==arr[1][2] || arr[2][3]==arr[3][1] || arr[2][3]==arr[3][2]) 
					// {
					// 	res=res+arr[2][3];
						
					// }
					//  if (arr[3][1]==arr[1][2] ||arr[3][1]==arr[2][2] || arr[3][1]==arr[2][3]) 
					// {
					// 	res=res+arr[3][1];
						
					// }
					//  if (arr[3][2]==arr[1][1] ||arr[3][2]==arr[1][3] || arr[3][2]==arr[2][1] || arr[3][2]==arr[2][3]) 
					// {
					// 	res=res+arr[3][2];
						
					// }
					//  if (arr[3][3]== arr[1][2] || arr[3][3]== arr[2][1] || arr[3][3]==arr[2][2]) 
					// {
					// 	res=res+arr[3][3];
						
					// }
				 res=max(mk1,mk2);
				cout<<res<<endl;
			
			
		}
		
	}

	return 0;
}


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
// //Drive Code Here//
// 	ll t;
// 	cin>>t;
//   while(t--)
//   {
//   	ll n;
//       cin>>n;
//       ll ans=0;
//       vector<vector<ll>> v(3,vector<ll>(3));
//       for(ll i = 0;i<3;i++){
//       cin>>v[i][0]>>v[i][1]>>v[i][2];
          
//       }
//       if(v[0][0]==n && v[1][1]==n && v[2][2]==n)
//       {
//           cout<<ans<<endl;
//           continue;
//       }
//       ll lsum=v[2][0]+v[2][1]+v[1][0];
//       ll rsum=v[0][1]+v[0][2]+v[1][2];
//       cout<<max(lsum,rsum)<<endl;

  
//   }
	

// 	return 0;
// }
