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
 int sum;
/*..........Part-03...........*/
int  solve()
 {
	string s;
	cin>>s;
	if(s=="Dodecahedron")
	{
		sum+=12;
	}
	else if (s=="Octahedron")
	{
		sum+=8;
	}
	else if (s=="Cube")
	{
		sum+=6;
	}
	else if (s=="Tetrahedron")
	{
		sum+=4;
	}
	else if (s=="Icosahedron")
	{
		sum+=20;
	}
return sum;
    }
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
	   solve();
	}
	cout<<sum<<endl;

	//Drive Code Here//

	return 0;
}
