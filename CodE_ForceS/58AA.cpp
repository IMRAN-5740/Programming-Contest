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
	string s;
	cin>>s;
	 int len=s.size();
	 int cnt=0;
	 for(int i=0;i<len;i++)
	 	{
	 		if(s[i]<='Z'){
	 			s[i]=s[i]+32;
	 		}
	 	}
	 	int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	 	for(int i=0;i<len;i++){
	 		//* main check position
	 		if(s[i]=='h')
	 		{
	 			cnt++;
	 		}
	 		else if(s[i]=='e' and (cnt>=1))
	 		{
	 			cnt1++;
	 		}
	 		else if(s[i]=='l' and (cnt>=1 and cnt1>=1))
	 		{
	 			cnt2++;
	 		}
	 		else if(s[i]=='o' and (cnt>=1 and cnt1>=1 and cnt2>=2))
	 		{
	 			cnt3++;
	 		}
	 	}
	 	if(cnt3>0)
	 	{
	 		cout<<"YES"<<endl;
	 	}else
	 	{
	 		cout<<"NO"<<endl;
	 	}
	 	//cout<<s<<endl;

	return 0;
}
