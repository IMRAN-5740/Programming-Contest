// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// //const ll N=1e9;


// int main()
// {
// 		vector<ll>vc;
// 		for(ll i=1;i<=10000000;i++)
// 		{
// 			if(i%10!=3 and  i%3!=0)
// 			{
// 				vc.push_back(i);
// 			}
// 		}
// 	ll t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		ll res=vc[n-1];
// 		cout<<res<<endl;

// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t=1;
	//cin>>t;
	while(t--)
	{
		double a,b,x,y,v,m=(double)INT_MAX,d;
	    cin>>a>>b; 
	    ll n;
	    cin>>n;
	    while(n--)
	    {
	    	
	    	cin>>x>>y>>v;
	        d=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
	        v=d/v;
	        m=min(m,v); 
	        //cout<<v<<endl;
	    }
	    printf("%0.20lf",m);
	    cout<<endl;
	}
	return 0;
}