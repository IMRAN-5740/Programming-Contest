/******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
/*********************_BSMRSTU_**********************/
/*.................MD.AMRAN MONDOL................*/
/*..........Computer Science & Engineering......*/

/*..........Part-01...........*/
#include<bits/stdc++.h>
using namespace std;

/*..........Part-02...........*/
#define ll                 long long
#define llu                unsigned long long
#define pii                pair<int,int>
#define pll                pair<ll,ll>
#define pil                pair<int,ll>
#define pli                pair<ll,int>
#define vi                 vector<int>
#define vl                 vector<ll>
#define pb                 push_back
#define mp                 make_pair
#define ff                 first
#define ss                 second
#define ok 		   		   return 0;
#define sz(x)              (int)x.size()
#define all(v)             v.begin(),v.end()
#define rall(v)            v.rbegin(),v.rend()
#define mem(a, b)          memset(a,b,sizeof(a))
#define pi       	       acos(-1.0)
#define For1(i,n)		   for (ll i=1;i<=n;i++)
#define For2(i,n)		   for (int i=1;i<=n;i++)
#define Faster  		   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


/*...........Part-03...........*/
int Int()    		   	   {int x; scanf("%d",&x); return x;}
ll Long()     		   	   {ll x; scanf("%lld",&x); return x;}
float Float()	   	   	   {float x; scanf("%f",&x); return x;}
double Double()  	   	   {double x; scanf("%lf",&x); return x;}

/*...........Part-04...........*/
#define     Int            Int()
#define     Long           Long()
#define		Float 		   Float()
#define 	Double 		   Double()

/*..........Part-05...........*/
const int N          = 	   (int)2e5 + 5 ;
const int maxN       =     (int)1e6 + 6 ;
const ll  Mod        =     (ll)1e9 + 7 ;
const int inf        =     (int)2e9 ;
const ll  Inf        =     (ll)1e18 ;
const int mod        =     (int)1e9 + 7 ;

/*..........Drive Code...........*/
int main(){
	Faster
	ll test=1;
	cin>>test;
	while(test--)
	{
		ll n;
		cin>>n;
		ll sum=0;
		if(n%2==1)
		{
			ll res=n*n;
			for(ll i=1;i<=n;i+=2)
			{
				 sum=sum+(i*i);
			}
			cout<<sum<<endl;
			sum=0;
		}
		else
		{
			ll res=n*n;
			for(ll i=2;i<=n;i+=2)
			{
				 sum=sum+(i*i);
			}
			cout<<sum<<endl;
			sum=0;
		}
		
	}
	ok
}