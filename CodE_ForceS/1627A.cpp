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
#define pi                  acos(-1.0)

/*..........Part-03...........*/
int main()
{

 int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        string s[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='B'){
                    ans=1;
                    break;
                }
 
            }
        }
        int r1=0,c1=0;
        for(int i=0;i<m;i++)
        {
            if(s[r-1][i]=='B')
            {
                r1=1;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i][c-1]=='B')
            {
                c1=1;
                break;
            }
        }
        if(ans==0)cout<<-1<<endl;
        else if(s[r-1][c-1]=='B')cout<<0<<endl;
        else if(r1==1 || c1==1)cout<<1<<endl;
        else cout<<2<<endl;
 
    }
    return 0;
}

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
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
       char a[n+2][m+2];
        int d=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
              cin>>a[i][j];
              if(a[i][j]=='W') d++;
            }
        }
        int x=0,y=0;
        if(d==n*m) cout<<"-1"<<endl;
        else
        {
            for(int i=1;i<=m;i++)
            {
                if(a[r][i]=='B') x++;
            }
            for(int j=1;j<=n;j++)
            {

                if(a[j][c]=='B') y++;
            }
            if(a[r][c]=='B') cout<<0<<endl;
            else
            {
                if(x==0 &&y==0)
                {
                	cout<<2<<endl;
                } 
                	
                else cout<<1<<endl;
            }

        }
    }
    return 0;
}