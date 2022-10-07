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

/**********-> Constraints <-***********/
 
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
   int n,value,i;
   cin>>n;
   int a1[n],a2[n],a3[n],a[3]={0};
   for(i=1;i<=n;i++)
   {
       cin>>value;
       if(value==1) 
       	{
       		a1[a[0]]=i;a[0]++;
       	}
       else if(value==2) 
       	{
       		a2[a[1]]=i;a[1]++;
       	}
       else 
       	{
       		a3[a[2]]=i;a[2]++;
       	}
   }
   sort(a,a+3);
   printf("%d\n",a[0]);

   for(value=1;value<=a[0];value++)
   {
       printf("%d %d %d\n",a1[value-1],a2[value-1],a3[value-1]);
   }
	return 0;
}