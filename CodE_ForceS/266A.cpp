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
        //Drive Code Here//
        int n,cnt=0;
        string s;
        cin>>n>>s;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]>'Z'){
                s[i]=s[i]-32;
            }
        }
        //cout<<s<<endl;
        for(int i=0;i<len;i++)
        {
            if(i!=n-1)
            {
               if (s[i]==s[i+1])
                {
                    cnt++;
                    //cout<<cnt<<endl;
                }
            }
            else
            {
                cout<<cnt;
            }
        }
    return 0;
}
