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
ll vis[30];
/*..........Part-03...........*/
int main(){
	
	//Drive Code Here//
 	int n,g=0,i;
 	cin>>n;
 	string a;
 	cin>>a;
 	{
        for(i = 0; i < n; i++)
            if(a[i] == 'a' or a[i] == 'A')
                vis[1]++;
            else if(a[i] == 'b' or a[i] == 'B')
                vis[2]++;
            else if(a[i] == 'c' or a[i] == 'C')
                vis[3]++;
            else if(a[i] == 'd' or a[i] == 'D')
                vis[4]++;
            else if(a[i] == 'e' or a[i] == 'E')
                vis[5]++;
            else if(a[i] == 'f' or a[i] == 'F')
                vis[6]++;
            else if(a[i] == 'g' or a[i] == 'G')
                vis[7]++;
            else if(a[i] == 'h' or a[i] == 'H')
                vis[8]++;
            else if(a[i] == 'i' or a[i] == 'I')
                vis[9]++;
            else if(a[i] == 'j' or a[i] == 'J')
                vis[10]++;
            else if(a[i] == 'k' or a[i] == 'K')
                vis[11]++;
            else if(a[i] == 'l' or a[i] == 'L')
                vis[12]++;
            else if(a[i] == 'm' or a[i] == 'M')
                vis[13]++;
            else if(a[i] == 'n' or a[i] == 'N')
                vis[14]++;
            else if(a[i] == 'o' or a[i] == 'O')
                vis[15]++;
            else if(a[i] == 'p' or a[i] == 'P')
                vis[16]++;
            
            else if(a[i] == 'q' or a[i] == 'Q')
                vis[17]++;
            else if(a[i] == 'r' or a[i] == 'R')
                vis[18]++;
            else if(a[i] == 's' or a[i] == 'S')
                vis[19]++;
            else if(a[i] == 't' or a[i] == 'T')
                vis[20]++;
            else if(a[i] == 'u' or a[i] == 'U')
                vis[21]++;
            else if(a[i] == 'v' or a[i] == 'V')
                vis[22]++;
            else if(a[i] == 'w' or a[i] == 'W')
                vis[23]++;
            else if(a[i] == 'x' or a[i] == 'X')
                vis[24]++;
            else if(a[i] == 'y' or a[i] == 'Y')
                vis[25]++;
            else
                vis[26]++;
        }
       for(i=1;i<=26;i++)
       {
       	if(vis[i]==0)
       	{
       		g++;
       		break;
       	}
       }
       if(g>0)
       	cout<<"NO"<<endl;
       else
       	cout<<"YES"<<endl;
      
	return 0;
}


