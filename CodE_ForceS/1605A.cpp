// /**
// MD AMRAN MONDOL
// Department of Computer Science and Engineering
// BSMRSTU
// **/
// #include<bits/stdc++.h>
// /****** Define ******/ 
// #define     ll          long long
// #define     ld          long double
// #define     ull         unsigned long long
// #define     pii         pair< int, int >
// #define     pll         pair< ll, ll >
// #define     vi          vector< int >
// #define     vll         vector< ll >
// #define     mem(a)      memset(a , 0 ,sizeof a)
// #define     FastIO      ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

// /**********-> Constraints <-***********/
 
// const int N          = (int)2e5 + 5 ;
// const int maxN       = (int)1e6 + 6 ;
// const ll  Mod        = (ll)1e9 + 7 ;
// const int inf        = (int)2e9 ;
// const ll  Inf        = (ll)1e18 ;
// const int mod        = (int)1e9 + 7 ;
// const double EPS     = (double)1e-9 ;
// const double PI      = (double)acos(-1.0) ;

// using namespace std;
// int main()
// {
// 	FastIO;
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int arr[3]={0};
// 		int a,b,c;
// 		cin>>a>>b>>c;
// 		arr[0]=a;
// 		arr[1]=b;
// 		arr[2]=c;
// 		sort(arr,arr+3);

// 		a=arr[0];
// 		b=arr[1];
// 		c=arr[2];
// 	//	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
// 	//cout<<a<<" "<<b<<" "<<c;
// 		if((a+c)==(2*b))
// 		{
// 			cout<<0<<endl;
// 		}
// 		else if((a+c)!=(2*b))
// 		{
// 			a=a-1;
// 			b=b+1;

// 			 if((a+c)==(2*b))
// 			{
// 				cout<<0<<endl;
// 			}
// 			else if((a+c)!=(2*b))
// 			{
// 				a=a+2;
// 				b=b-2;
// 				 if((a+c)==(2*b))
// 				{
// 					cout<<0<<endl;
// 				}
// 				else
// 				{
// 				cout<<1<<endl;
// 				}
// 			}
// 		}
// 		else if((a+c)!=(2*b))
// 		{
// 			b=b+1;
// 			c=c-1;

// 			 if((a+c)==(2*b))
// 			{
// 				cout<<0<<endl;
// 			}
// 			else if((a+c)!=(2*b))
// 			{
				
// 				b=b+2;
// 				c=c-2;

// 				 if((a+c)==(2*b))
// 				{
// 					cout<<0<<endl;
// 				}
// 				else
// 				{
// 				cout<<1<<endl;
// 				}
// 			}	
// 		}
// 		else if((a+c)!=(2*b))
// 		{
// 			a=a+1;
// 			c=c-1;

// 			 if((a+c)==(2*b))
// 			{
// 				cout<<0<<endl;
// 			}
// 			else if((a+c)!=(2*b))
// 			{
// 				a=a+2;
// 				c=c-2;

// 				 if((a+c)==(2*b))
// 				{
// 					cout<<0<<endl;
// 				}
// 				else
// 				{
// 				cout<<1<<endl;
// 				}
// 			}
// 		}	
// 		else
// 		{
// 			cout<<1<<endl;
// 		}
// 	}
// 	return 0;
// }

/**
MD AMRAN MONDOL
Department of Computer Science and Engineering
BSMRSTU
**/
#include<bits/stdc++.h>
/****** Define ******/ 
#define     ll          long long
#define     ld          long double
#define     ull         unsigned long long
#define     pii         pair< int, int >
#define     pll         pair< ll, ll >
#define     vi          vector< int >
#define     vll         vector< ll >
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     FastIO      ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;

/*********-> Constraints <-**********/
 
const int N          = (int)2e5 + 5 ;
const int maxN       = (int)1e6 + 6 ;
const ll  Mod        = (ll)1e9 + 7 ;
const int inf        = (int)2e9 ;
const ll  Inf        = (ll)1e18 ;
const int mod        = (int)1e9 + 7 ;
const double EPS     = (double)1e-9 ;
const double PI      = (double)acos(-1.0) ;

using namespace std;
int main()
{
	FastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
	cin>>a>>b>>c;
	int sum=a+c-(2*b);
	if(sum%3==0)
	{
		cout<<0<<endl;
	}
	else{
		cout<<1<<endl;
	}
	}
	
	return 0;
}