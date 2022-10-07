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
int main(){
	
	//Drive Code Here//
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll B,P;
		P=(log2(n))/(log2(2));
		B=pow(2,P);
		ll X,Y;
		X=B/2;
		Y=n-B+1;

		if(X>Y)
		{
			cout<<X<<endl;
		}
		else
		{
			cout<<Y<<endl;
		}
		// ll array[n+1];
		// ll c_array[n+1];
		// for(ll i=1;i<=n;i++)
		// {
		// 	array[i]=i;
		// 	if(array[i]%2==0)
		// 	{
		// 		c_array[i]=0;
		// 	}
		// 	else
		// 	{
		// 		c_array[i]=1;
		// 	}
		// }
		// for(ll j=1;j<=n;j++)
		// {
		// 	cout<<c_array[j]<<" ";
		// }
		// cout<<endl;

	}

	return 0;
}
