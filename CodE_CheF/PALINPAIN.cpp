// /******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
// /*********************_BSMRSTU_**********************/
// /*.................MD.IMRAN MONDOL................*/
// /*..........Computer Science & Engineering......*/

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
// #define ok 		   		   return 0;
// #define sz(x)              (int)x.size()
// #define all(v)             v.begin(),v.end()
// #define rall(v)            v.rbegin(),v.rend()
// #define mem(a, b)          memset(a,b,sizeof(a))
// #define pi       	       acos(-1.0)
// #define For1(i,n)		   for (ll i=1;i<=n;i++)
// #define For2(i,n)		   for (int i=1;i<=n;i++)
// #define Faster  		   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// /*...........Part-03...........*/
// int Int()    		   	   {int x; scanf("%d",&x); return x;}
// ll Long()     		   	   {ll x; scanf("%lld",&x); return x;}
// float Float()	   	   	   {float x; scanf("%f",&x); return x;}
// double Double()  	   	   {double x; scanf("%lf",&x); return x;}

// /*...........Part-04...........*/
// #define     Int            Int()
// #define     Long           Long()
// #define		Float 		   Float()
// #define 	Double 		   Double()

// /*..........Part-05...........*/
// const int N          = 	   (int)2e5 + 5 ;
// const int maxN       =     (int)1e6 + 6 ;
// const ll  Mod        =     (ll)1e9 + 7 ;
// const int inf        =     (int)2e9 ;
// const ll  Inf        =     (ll)1e18 ;
// const int mod        =     (int)1e9 + 7 ;

// /*..........Drive Code...........*/
// int main(){
// 	Faster
// 	ll test=1;
// 	cin>>test;
// 	while(test--)
// 	{
// 		ll x,y;
// 		cin>>x>>y;
// 		ll tm=x;
// 		ll tm1=y;
// 		if(x%2==1 and y%2==1)
// 		{
// 			cout<<-1<<endl;
// 		}
// 		else if ((x%2==0 and y%2==0) and x<y)
// 		{
// 			int left=x/2;
// 			int right=x/2;
// 			while(left--)
// 			{
// 				cout<<"a";
// 			}
// 			while(y--)
// 			{
// 				cout<<"b";
// 			}
// 			while(right--)
// 			{
// 				cout<<"a";
// 			}
// 			cout<<endl;

// 			int sleft=tm1/2;
// 			int sright=tm1/2;
// 			while(sleft--)
// 			{
// 				cout<<"b";
// 			}
// 			while(tm--)
// 			{
// 				cout<<"a";
// 			}
// 			while(sright--)
// 			{
// 				cout<<"b";
// 			}
// 			cout<<endl;
// 		}
// 		else if ((x%2==0 and y%2==0) and x>y)
// 		{
// 			int left=x/2;
// 			int right=x/2;
// 			while(left--)
// 			{
// 				cout<<"a";
// 			}
// 			while(y--)
// 			{
// 				cout<<"b";
// 			}
// 			while(right--)
// 			{
// 				cout<<"a";
// 			}
// 			cout<<endl;
			
// 			int sleft=tm1/2;
// 			int sright=tm1/2;
// 			while(sleft--)
// 			{
// 				cout<<"b";
// 			}
// 			while(tm--)
// 			{
// 				cout<<"a";
// 			}
// 			while(sright--)
// 			{
// 				cout<<"b";
// 			}
// 			cout<<endl;

// 		}
// 		else if ((x%2==0 and y%2==0) and x==y)
// 		{
// 			int left=x/2;
// 			int right=x/2;
// 			while(left--)
// 			{
// 				cout<<"a";
// 			}
// 			while(y--)
// 			{
// 				cout<<"b";
// 			}
// 			while(right--)
// 			{
// 				cout<<"a";
// 			}
// 			cout<<endl;
			
// 			int sleft=tm1/2;
// 			int sright=tm1/2;
// 			while(sleft--)
// 			{
// 				cout<<"b";
// 			}
// 			while(tm--)
// 			{
// 				cout<<"a";
// 			}
// 			while(sright--)
// 			{
// 				cout<<"b";
// 			}
// 			cout<<endl;
// 		}
// 		else if((x%2==0 and y%2==1) and x<y)
// 		{
// 			int kkk=tm/2;
// 			int kkkkk=tm/2;
// 			int kkkk=tm1;

// 			while(kkk--)
// 			{
// 				cout<<"a";
// 			}
// 			while(kkkk--)
// 			{
// 				cout<<"b";
// 			}
// 			while(kkkkk--)
// 				{
// 					cout<<"a";
// 				}
// 				cout<<endl;

				
				
// 					int rr=tm/2;
// 					int rr1=tm/2;
// 					int r=tm1/2;
// 					int km=tm1/2;
// 				while(r--)
// 				{
// 					cout<<"b";
// 				}
// 				while(rr--)
// 				{
// 					cout<<"a";
// 				}

// 				cout<<"b";
// 				while(rr1--)
// 				{
// 					cout<<"a";
// 				}
// 				while(km--)
// 				{
// 					cout<<"b";
// 				}
// 				cout<<endl;
// 			}
// 			else if((x%2==0 and y%2==1) and x>y)
// 		{
// 			int kkk=tm/2;
// 			int kkkkk=tm/2;
// 			int kkkk=tm1;

// 			while(kkk--)
// 			{
// 				cout<<"a";
// 			}
// 			while(kkkk--)
// 			{
// 				cout<<"b";
// 			}
// 			while(kkkkk--)
// 				{
// 					cout<<"a";
// 				}
// 				cout<<endl;

				
				
// 					int rr=tm/2;
// 					int rr1=tm/2;
// 					int r=tm1/2;
// 					int km=tm1/2;
// 				while(r--)
// 				{
// 					cout<<"b";
// 				}
// 				while(rr--)
// 				{
// 					cout<<"a";
// 				}

// 				cout<<"b";
// 				while(rr1--)
// 				{
// 					cout<<"a";
// 				}
// 				while(km--)
// 				{
// 					cout<<"b";
// 				}
// 				cout<<endl;
// 			}
// 			else if ((x%2==0 and y%2==1)and(x==y))
// 			{
// 				int w= tm/2;
// 				int y=tm1;
// 				int wx=tm/2;
// 				while(w--)
// 				{
// 					cout<<"a";
// 				}
// 				while(y--)
// 				{
// 					cout<<"b";
// 				}
// 				while(wx--)
// 				{
// 					cout<<"a";
// 				}
// 				cout<<endl;

// 				int wxx= tm/2;
// 				int yx=tm1;
// 				int wxxx=tm/2;
// 				while(wxx--)
// 				{
// 					cout<<"a";
// 				}
// 				while(yx--)
// 				{
// 					cout<<"b";
// 				}
// 				while(wxxx--)
// 				{
// 					cout<<"a";
// 				}
// 			}
// 			else if((x%2==1 and y%2==0) and x<y)
// 		{
// 			int kkk=tm/2;
// 			int kkkkk=tm/2;
// 			int kkkk=tm1/2;
// 			int k4=tm1/2;

// 			while(kkk--)
// 			{
// 				cout<<"a";
// 			}
// 			while(kkkk--)
// 			{
// 				cout<<"b";
// 			}
// 			cout<<"a";
// 			while(k4--)
// 				{
// 					cout<<"b";
// 				}
// 				while(kkkkk--)
// 			{
// 				cout<<"a";
// 			}
// 				cout<<endl;

				
				
// 					int rr=tm/2;
// 					int rr1=tm/2;
// 					int r=tm1/2;
// 					int km=tm1/2;
// 				while(r--)
// 				{
// 					cout<<"a";
// 				}
// 				while(rr--)
// 				{
// 					cout<<"b";
// 				}

// 				cout<<"a";
// 				while(rr1--)
// 				{
// 					cout<<"b";
// 				}
// 				while(km--)
// 				{
// 					cout<<"a";
// 				}
// 				cout<<endl;
// 			}
// 			else if((x%2==1 and y%2==0) and x>y)
// 		{
// 			int kkk=tm/2;
// 			int kkkkk=tm/2;
// 			int k1=tm1/2;
// 			int k2=tm1/2;

// 			while(kkk--)
// 			{
// 				cout<<"a";
// 			}
// 			while(k1--)
// 			{
// 				cout<<"b";
// 			}
// 			cout<<"a";
// 			while(k2--)
// 				{
// 					cout<<"b";
// 				}
// 				while(kkkkk--)
// 					{
// 						cout<<"a";
// 					}

// 				cout<<endl;

				
				
// 					int rr=tm1/2;
// 					int rr1=tm1/2;
// 					int r=tm;
// 				while(rr--)
// 				{
// 					cout<<"b";
// 				}
// 				while(r--)
// 				{
// 					cout<<"a";
// 				}

// 				while(rr1--)
// 				{
// 					cout<<"b";
// 				}
				
// 				cout<<endl;
// 			}
// 	}
// 	ok
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const ll mod=998244353;
const int N=1e5+1;
int n;
int a[N],b[N];
void solve(){
	int x,y;
	cin >> x >> y;
	if(x==1 || y==1) cout << "-1\n";
	else if(x%2==0)
	{
		for(int i=1; i<=x/2 ;i++) cout << 'a';
		for(int i=1; i<=y ;i++) cout << 'b';
		for(int i=1; i<=x/2 ;i++) cout << 'a';
		cout <<"\nb";
		for(int i=1; i<=x/2 ;i++) cout << 'a';
		for(int i=1; i<=y-2 ;i++) cout << 'b';
		for(int i=1; i<=x/2 ;i++) cout << 'a';
		cout <<"b\n";
	}
	else if(y%2==0)
	{
		for(int i=1; i<=y/2 ;i++) cout << 'b';
		for(int i=1; i<=x ;i++) cout << 'a';
		for(int i=1; i<=y/2 ;i++) cout << 'b';
		cout <<"\na";
		for(int i=1; i<=y/2 ;i++) cout << 'b';
		for(int i=1; i<=x-2 ;i++) cout << 'a';
		for(int i=1; i<=y/2 ;i++) cout << 'b';
		cout <<"a\n";
		
	}
	else cout << "-1\n";
}
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) 
		{
			solve();
		}
}
