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
	int l,r;
	cin>>l>>r;
	vector<int>vc;
	if(l%2==0 and r%2==0)
	{
		for(int i=l+1;i<=r-1;i++)
		{
			if(i%2==1)
			{
				vc.push_back(i);
			}
		}
		for(int i=0;i<vc.size();i++)
		{
			cout<<vc[i]<<" ";
		}
		cout<<endl;
	}
	else if(l%2==1 and r%2==0)
	{
		for(int i=l;i<=r-1;i++)
		{
			if(i%2==1)
			{
				vc.push_back(i);
			}
		}
		for(int i=0;i<vc.size();i++)
		{
			cout<<vc[i]<<" ";
		}
		cout<<endl;
	}
	else if(l%2==0 and r%2==1)
	{
		for(int i=l+1;i<=r;i++)
		{
			if(i%2==1)
			{
				vc.push_back(i);
			}
		}
		for(int i=0;i<vc.size();i++)
		{
			cout<<vc[i]<<" ";
		}
		cout<<endl;
	}
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
