// /******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
// /*********************_BSMRSTU_**********************/
// /*.................MD AMRAN MONDOL................*/
// /*..................Dept Of CSE.................*/
// /*..........Part-01...........*/

// #include<bits/stdc++.h>
// using namespace std;

// /*..........Part-02...........*/
// #define ll                 long long
// #define llu                unsigned long long
// #define pii                pair<int,int>
// #define pll                pair<ll,ll>
// #define pil                pair<int,ll>
// #define pli                pair<ll,int>
// #define vi                 vector<int>
// #define vl                 vector<ll>
// #define pb                 push_back
// #define mp                 make_pair
// #define ff                 first
// #define ss                 second
// #define sz(x)              (int)x.size()
// #define all(v)             v.begin(),v.end()
// #define rall(v)            v.rbegin(),v.rend()
// #define mem(a, b)          memset(a,b,sizeof(a))
// #define pi       	       acos(-1.0)
// const int N = 2e5 + 5;

// /*..........Part-03...........*/
// void solve()
//     {
// 		string s;
// 		cin>>s;
// 		int left[26]={0};
// 		int right[26]={0};
// 		int len=s.size();
// 		for(int i=0;i<len/2;i++)
// 		{
// 			int index=s[i]-'a';
// 			left[index]++;
// 		}
// 		for(int i=(len+1)/2;i<len;i++)
// 		{
// 			int index=s[i]-'a';
// 			right[index]++;
// 		}
// 		bool chk=false;
// 		for(int i=0;i<26;i++)
// 		{
// 			if(left[i]!=right[i])
// 			{
// 				chk=true;
// 				break;
// 			}
// 		}
// 		if(chk==true)
// 		{
// 			cout<<"NO"<<endl; 
// 		}
// 		else
// 		{
// 			cout<<"YES"<<endl;
// 		}
//     }
// int main()
// {
// 	int t=1;
// 	cin>>t;
// 	while(t--)
// 	{
// 	   solve();
// 	}
// 	//Drive Code Here//

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
const int N = 2e5 + 5;

/*..........Part-03...........*/
void solve()
    {
	map<int,int>mp;
	map<int,int>mp1;
	string s;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len/2;i++)
	{
		int index=s[i]-'a';
		mp[index]++;
	}
	for(int i=(len+1)/2;i<len;i++)
	{
		int index=s[i]-'a';
		mp1[index]++;
	}
	int chk=0;
	for(int i=0;i<26;i++)
	{
		if(mp[i]!=mp1[i])
		{
			chk=1;

		}
	}
	if(chk==1)
	{
		cout<<"NO"<<endl;
	}
	else
		cout<<"YES"<<endl;
    }
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
	   solve();
	}
	//Drive Code Here//

	return 0;
}
