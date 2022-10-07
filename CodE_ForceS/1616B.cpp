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
	//Drive Code Here//
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        if(s[0]=='a')
        {
            cout<<"aa"<<endl;
            continue;
        }
        if(s[0]==s[1])
        {
                cout<<s[0]<<s[1]<<endl;
                continue;
        }
        ans+=s[0];
        int i;
        for(i=1;i<s.size();i++)
        {
            if(s[i]<=s[i-1])
            	{
            		ans+=s[i];
            	}
            else break;
        }
 
        string ans2;
        for(int i=ans.size()-1;i>=0;i--)
        	{
        		ans2+=s[i];
        	}
        cout<<ans<<ans2<<endl;
    }

	return 0;
}
