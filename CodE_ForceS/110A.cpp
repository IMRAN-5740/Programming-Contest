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
	ll n;
	cin>>n;
	string s;
	s=to_string(n);
	ll len=s.size();
	//cout<<len<<endl;
	ll cnt=0,cnt1=0;
	for(ll i=0;i<len;i++){
		if(s[i]=='4' ){
			cnt++;
		}
		else if(s[i]=='7'){
			cnt1++;
		}
	}
	ll res=cnt+cnt1;
	//cout<<cnt<<endl;
	if(res==4 || res==7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}
