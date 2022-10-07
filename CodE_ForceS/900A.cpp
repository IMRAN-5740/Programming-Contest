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
const int N = 2e5 + 5;

/*..........Part-03...........*/

int main()
{
	int t;
	int left=0;
    int right=0;
	cin>>t;
	while(t--)
	{
	  int x,y;
    	cin>>x>>y;
    	
    	if(x<0 )
    	{
    		left++;
    	}else
    	{
    		right++;
    	}
    	
	}
	if(left>1 and right>1)
    	{
    		cout<<"NO"<<endl;
    	}
    	else
    	{
    		cout<<"YES"<<endl;
    	}
	//Drive Code Here//

	return 0;
}
