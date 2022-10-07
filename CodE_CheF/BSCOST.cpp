// // // #include<bits/stdc++.h>
// // // #define ll long long
// // // const int N =1e2;
// // // ll arr[N+1];
// // // //Bangladesh Coding Sector is very Weekly Contest Rule of the Contest.
// // // using  namespace std;
// // // int main()
// // // {
// // // 	int t;
// // // 	cin>>t;
// // // 	while(t--)
// // // 	{
// // // 		int n,x,y;
// // // 		cin>>n>>x>>y;
// // // 		string s;
// // // 		cin>>s;
// // // 		int cnt=0;
// // // 		for(int i =0;i<s.size();i++)
// // // 		{
// // // 			if(s[i]=='1')
// // // 			{
// // // 				cnt=1;
// // // 				break;
// // // 			}
// // // 		}
// // // 		if(cnt==0)
// // // 		{
// // // 			cout<<0<<endl;
// // // 		}
// // // 		else
// // // 		{
// // // 			//else
// // // 			{
// // // 				int rn=0;
// // // 				int pn=0;
// // // 				for(int i=0;i<s.size()-1;i++)
// // // 				{	
// // // 					if(s[i]=='0' and s[i+1]=='1')
// // // 					{
// // // 						rn++;
// // // 					}
// // // 					else if(s[i]=='1' and s[i+1]=='0')
// // // 					{
// // // 						pn++;
// // // 					}
// // // 				}
// // // 				int res=(rn*x)+(pn*y);
// // // 				arr[1]=res;
				
// // // 			}

// // // 			//if(x>y)
// // // 			{
// // // 				int cn=0;
// // // 				sort(s.begin(),s.end(),greater<char>());
// // // 				for(int i=0;i<s.size()-1;i++)
// // // 				{	
// // // 					if(s[i]=='1' and s[i+1]=='0')
// // // 					{
// // // 						cn++;
// // // 					}
// // // 				}
// // // 				//cout<<(y*cn)<<endl;
// // // 				int res1=y*cn;
// // // 				arr[2]=res1;
// // // 			}
// // // 			//else if(x<y)
// // // 			{
// // // 				int mn=0;
// // // 				sort(s.begin(),s.end());
// // // 				for(int i=0;i<s.size()-1;i++)
// // // 				{	
// // // 					if(s[i]=='0' and s[i+1]=='1')
// // // 					{
// // // 						mn++;
// // // 					}
// // // 				}
// // // 				//cout<<(x*mn)<<endl;
// // // 				int res3=x*mn;
// // // 				arr[3]=res3;
// // // 			}
// // // 			ll mnnn=arr[1];
// // // 			for(int i=2;i<=3;i++)
// // // 			{
// // // 				mnnn=min(mnnn,arr[i]);
// // // 			}
// // // 			cout<<mnnn<<endl;

			
			
			
// // // 		}
// // // 	}
// // // 	return 0;
// // // }
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
	
// // // 	cout<<"BucketPotato"<<endl; 
// // // 	return 0;
// // // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int n;
// // 	cin>>n;
// // 	int arr[n];
// // 	int sum=0;
// // 	for(int i=0;i<n;i++)
// // 	{
// // 		cin>>arr[i];
// // 	}
// // for(int i=0;i<n;i++)
// // 	{
// // 		sum+=arr[i];
// // 	}
// // 	cout<<sum<<endl;
// // 	return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//  int n;
//  cin>>n;
//  	if(n==2999)
//  	{


//    cout<<3000<<endl;
// }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vector<ll > arr(n);
map<ll,ll>mp;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
	mp[arr[i]]++;
}
ll pos=-1e18,r=-1e18;
for(auto it:mp)
{
	if(it.second<=r)
	{
		continue;
	}
	pos=it.first;
	r=it.second;
}
ll res=n-r;
ll ans=0;
while(res>0)
{
	ans++;
	if(r<res)
	{
		res-=r;
		ans+=r;
		r*=2;
	}
	else
	{
		ans+=(r);
		break;
	}
}
cout<<ans<<endl;
}
return 0;
}