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
	ll t,v;
	ll cnt=0;
	cin>>t>>v;
	while(t--)
	{
		string s;
		int k;
		cin>>s;
		cin>>k;

		if(s=="+")
		{
			v+=k;
		}
		else
		{
			if(v>=k)
			{
				if (s=="-")
				{
					v-=k;
				}
			}
			else
			{
				cnt++;
			}
			
		}
		
	}
	cout<<v<<" "<<cnt<<endl;

	return 0;
}