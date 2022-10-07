/******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
/*********************_BSMRSTU_**********************/
/*.................MD AMRAN MONDOL................*/
/*..................Dept Of CSE.................*/
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
#define sz(x)              (int)x.size()
#define all(v)             v.begin(),v.end()
#define rall(v)            v.rbegin(),v.rend()
#define mem(a, b)          memset(a,b,sizeof(a))
#define pi       	       acos(-1.0)

/*..........Part-03...........*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,c=0,i,x;
         cin>>n;
         int a[n+1];
          for(i=1;i<=n;i++)
          {
            cin>>a[i];
          }
          for(i=1;i<=n;i++)
          {
            x=a[i];
            c=1;
            while(a[x]!=a[i])
            {
              if(a[x]!=a[i])
              {
                x=a[x];
                c++;

              } 
            }
            cout<<c<<" ";
          }
          cout<<endl;
    }
    return 0;
}
	//Drive Code Here//

