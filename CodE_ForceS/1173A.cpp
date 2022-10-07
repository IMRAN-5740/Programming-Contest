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
	int x,y,z;
	cin>>x>>y>>z;
	int dis=abs(x-y);
	if(z==0)
	{
		if(x>y)
		{
			cout<<"+"<<endl;
		}
		else if (x<y)
		{
			cout<<"-"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	// else if(z==1)
	// {
	// 	if(x>y)
	// 	{
	// 		if((y+z)==x)
	// 		{
	// 			cout<<"?"<<endl;
	// 		}
	// 		else{
	// 			cout<<"+"<<endl;
	// 		}
	// 	}
	// 	else if(x<y)
	// 	{
	// 		if((x+z)==y)
	// 		{
	// 			cout<<"?"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"-"<<endl;
	// 		}
	// 	}else
	// 	{
	// 		cout<<"?"<<endl;
	// 	}
	// }
	
	else if (z<dis)
	{
		if(x>y)
		{
			cout<<"+"<<endl;
		}
		else if (x<y)
		{
			cout<<"-"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
			// if(x>y)
			// {
			// 	if((y+z)==x or (y+z-1)==x or (y+z-2)==x)
			// 	{
			// 		cout<<"?"<<endl;
			// 	}
			// 	else{
			// 		cout<<"+"<<endl;
			// 	}
			// }
			// else if(x<y)
			// {
			// 	if((x+z)==y or (x+z-1)==y or  (x+z-2)==y)
			// 	{
			// 		cout<<"?"<<endl;
			// 	}
			// 	else
			// 	{
			// 		cout<<"-"<<endl;
			// 	}
			// }else
			// {
			// 	cout<<"?"<<endl;
			// }
		
		
	}
	else
	{
		cout<<"?"<<endl;
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
