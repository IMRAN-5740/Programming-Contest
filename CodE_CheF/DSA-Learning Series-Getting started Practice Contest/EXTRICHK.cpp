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
void solve()
    {
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c and (b+c)>a and (a+c)>b)
	{
		if(a==b and b==c)
		{
			cout<<1<<endl;
		}
		else if((a==b and b!=c) or (a==c and c!=b) or (c==b and b!=a) )
		{
			cout<<2<<endl;
		}
		else if((a!=b and b!=c) or (a!=c and b!=c) or (c!=b and b!=a))
		{
			cout<<3<<endl;
		}

	}
	else
		cout<<-1<<endl;
    }
int main()
{
	int t=1;
	//cin>>t;
	while(t--)
	{
	   solve();
	}
	//Drive Code Here//

	return 0;
}
