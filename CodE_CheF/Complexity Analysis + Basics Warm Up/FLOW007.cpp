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

void reverseStr(string & str)
{
    int n = str.length();

    for (int i=0;i<n/2;i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}
void solve()
    {
		int k;
		cin>>k;
		string s=to_string(k);
		//cout<<s<<endl;
		int len=s.size();
		//cout<<len<<endl;
		reverseStr(s);
		//cout<<s<<endl;
		string m=s;
		//cout<<m<<endl;
		int pos=0;
		for(int i=0;i<len;i++)
		{
			if(m[i]!='0')
			{
				pos=i;
				break;
			}
		}
		for(int j=pos;j<len;j++)
		{
			cout<<m[j];
		}
		cout<<endl;
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

