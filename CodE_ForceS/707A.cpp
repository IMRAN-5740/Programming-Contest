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

/*..........Part-03...........*/\
int n,m;
int White,Black,Gray,Yellow,Cayan,Meghna;

void solve()
    {
    	cin>>n>>m;
    	char c[n][m];
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			cin>>c[i][j];
    		}
    	}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(c[i][j]=='W')
				{
					White++;
				}
				else if(c[i][j]=='B')
				{
					Black++;
				}
				else if(c[i][j]=='G')
				{
					Gray++;
				}
				else if(c[i][j]=='M')
				{
					Meghna++;
				}
				else if(c[i][j]=='C')
				{
					Cayan++;
				}
				else if(c[i][j]=='Y')
				{
					Yellow++;
				}
			}
		}
		if((White>0 or Black>0 or Gray>0)and((Cayan==0)and(Yellow==0)and Meghna==0))
		{
			cout<<"#Black&White"<<endl;
		}
		//(White==0 and Black==0 and Gray==0)and
		if(((Cayan>0)or(Yellow>0)or Meghna>0))
		{
			cout<<"#Color"<<endl;
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
