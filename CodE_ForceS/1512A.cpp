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
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll arr[n+1];
		for(int i =1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int res=0;
		int x=arr[1];
		int y=arr[2];
		int z=arr[3];
		int i;
		int cnt=0,mnt=0;
		if(x==y and y!=z)
		{
			cout<<3<<endl;
		}
		else if (x==z and y!=x)
		{
			cout<<2<<endl;
		}
		else if (y==z and x!=z)
		{
			cout<<1<<endl;
		}
		else
		{
			for( i=4;i<=n;i++)
			{
				if(x!=arr[i])
				{
					cnt=i;
				}
				else if (y!=arr[i])
				{
					cnt=i;
				}
				else if (z!=arr[i])
				{
					cnt=i;
				}
			}
			cout<<cnt<<endl;
		}
		
	
	}
	return 0;
}
