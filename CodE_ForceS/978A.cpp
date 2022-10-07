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
void solve()
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	set<int>s;
    	vector<int>vec;
    	vector<int>::iterator it;
    	for(int i=n-1;i>=0;i--)
    	{
    		if(s.find(arr[i])==s.end())
    		{
    			vec.push_back(arr[i]);
    			s.insert(arr[i]);
    		}
    	}
    	reverse(vec.begin(),vec.end());
    	cout<<s.size()<<endl;
    	for(it =vec.begin();it!=vec.end();it++)
    	{
    		cout<<*it<<" ";
    	}
    	cout<<endl;
	
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
