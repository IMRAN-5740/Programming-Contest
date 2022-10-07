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
	
	int t;
    cin>>t;
    while(t--)
    {
        ll n,k,temp=0;
        cin>>n>>k;
        if(n<k)cout<<"NO"<<endl;
        else if(n==k)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++)cout<<1<<" ";
            cout<<endl;
        }
        else
        {
            if(n%2==0 && k%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<(n-k+1)<<endl;
            }
            else if(n%2==0 && k%2==1)
            {
                if((k*2)<=n)
                {
                    temp=(n-(k-1)*2);
                    cout<<"YES"<<endl;
                    for(int i=1;i<k;i++)cout<<2<<" ";
                    cout<<temp<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else if(n%2==1 && k%2==0)cout<<"NO"<<endl;
            else
            {
                temp=(n-k+1);
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" ";
                cout<<temp<<endl;
            }
 
        }
    }

	return 0;
}