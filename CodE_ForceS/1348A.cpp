// #include<bits/stdc++.h>
// #define ll long long int 
// using namespace std;
// vector<ll>vec,vec1;
// int main()
// {
// 	ll t;
// 	cin>>t;
// 	ll sum=0,sub=0;
// 	ll n;
// 	while(t--)
// 	{
		
// 		cin>>n;
		
// 		if(n==2)
// 		{
// 			cout<<2<<endl;
// 		}
// 		else
// 		{
// 			// ll res=0,res1=0;
// 			// for(int i=1,j=n;i<=n/2,j>(n/2);i++,j--)
// 			// {
// 			// 	 res=pow(2,i);
// 			// 	 res1=pow(2,j);
// 			// 	if(i%2==1 and j%2==0)
// 			// 	{
// 			// 		sum=sum+(res+res1);
// 			// 	}
// 			// 	else if(i%2==0 and j%2==1)
// 			// 	{
// 			// 		sum=sum-(res1+res);
// 			// 	}
				
// 			// }
// 			// //cout<<sum<<" "<<sub<<endl;
// 			// cout<<sum<<endl;
// 			// sum=0;
// 			// res=0,res1=0;
// 			sum=pow(2,n);
// 			sub=0;
// 			for(ll i=1;i<(n/2);i++)
// 			{
// 				sum=sum+(pow(2,i));
// 				//sub=sub+(pow(2,j));
// 			}
// 			for(ll j=n-1;j>=(n/2);j--)
// 			{
// 				sub=sub+(pow(2,j));
// 			}
// 			cout<<(sum-sub)<<endl;
// 		}
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
#define ll long long int 
using  namespace std;
int main()
{
	ll a,b;
	cin>>a>>b;
	if(max(a,b)==6)cout<<"1/6"<<endl;//(6-(max(a)-1))/6
    if(max(a,b)==5)cout<<"1/3"<<endl;
    if(max(a,b)==4)cout<<"1/2"<<endl;
    if(max(a,b)==3)cout<<"2/3"<<endl;
    if(max(a,b)==2)cout<<"5/6"<<endl;
    if(max(a,b)==1)cout<<"1/1"<<endl;
	return 0;
}