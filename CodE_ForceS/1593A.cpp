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
        int a[4],b[4],A,B,C;
        for(int i=0;i<3;i++) { cin>>a[i]; b[i]=a[i];}
        if(a[0]==a[1] && a[1]==a[2]) cout<<"1 "<<"1 1"<<endl;
        else
        {
            sort(a,a+3);
            if(a[2]==a[1])
            {
                if(a[0]==b[0]) cout<<a[2]-b[0]+1<<" 1 1"<<endl;
                else if(a[0]==b[1]) cout<<"1 "<<a[2]-b[1]+1<<" 1"<<endl;
                else if(a[0]==b[2]) cout<<"1 "<<"1 "<<a[2]-b[2]+1<<endl;
            }
            else{
            if(a[2]==b[0]) A=0;
            else if (a[2]>b[0]) A=a[2]-b[0]+1;

            if (a[2]==b[1])  B=0;
            else if (a[2]>b[1])  B=a[2]-b[1]+1;

            if (a[2]==b[2])  C=0;
            else if (a[2]>b[2]) C=a[2]-b[2]+1;
            cout<<A<<" "<<B<<" "<<C<<endl;
            }


        }


    }
}