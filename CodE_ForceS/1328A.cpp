// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main(){
// 	ll t;
// 	cin>>t;
// 	while(t--){
// 		ll a,b;
// 		cin>>a>>b;
// 		ll ans=0,d=0,rem=0,x=0;
// 		if(a%b==0){
// 			cout<<"0"<<endl;
// 		}
// 		else if(a/b==1){
// 			d=a/b;
// 			rem=a%b;
// 			ans=d+rem;
// 			cout<<ans<<endl;
// 		}
// 		else{
// 			d=a/b;
// 			d++;
// 			 x=d*b;
// 			 //cout<<x<<endl;
// 			ans=x-a;
// 			cout<<ans<<endl;
// 		}

// 	}
// 	return 0;
// }

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
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll ans=0,d=0,rem=0,x=0;
		if(a%b==0)
		{
			cout<<"0"<<endl;
		}
		// else if(a/b==1){
		// 	d=a/b;
		// 	rem=a%b;
		// 	ans=d+rem;
		// 	cout<<ans<<endl;
		// }
		// else{
		// 	d=a/b;
		// 	d++;
		// 	 x=d*b;
		// 	 //cout<<x<<endl;
		// 	ans=x-a;
		// 	cout<<ans<<endl;
		// }
		else
		{
			ans=b-a%b;
			cout<<ans<<endl;
		}

	}

	return 0;
}
