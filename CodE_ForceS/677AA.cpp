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
	int n,h;
	cin>>n>>h;
	int array[n+1];
	int cnt=0;
	int rnt=0;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
		if(array[i]<=h)
		{
			cnt++;
		}
		else if(array[i]>h)
		{
			rnt+=2;
		}
	}
	int res=cnt+rnt;
	cout<<res<<endl;
	return 0;
}