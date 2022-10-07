
// #include<bits/stdc++.h>
// using namespace std;



// int sc1(){int x; scanf("%d",&x); return x;}

// long long sc2(){long long x;scanf("%lld",&x);return x;}

// #define  gcd(a,b)         __gcd(a,b)
// #define  lcm(a,b)         (a*b)/gcd(a,b)
// #define  Int              sc1()
// #define  LL               sc2()
// #define  For(n)           for(int i=0;i<n;i++)
// #define  Forj(n)          for(int j=0;j<n;j++)
// #define  Fork(n)          for(int k=0;k<n;k++)
// #define  For1(n)          for(int i=1;i<=n;i++)
// #define  ll               long long
// #define  vi               std::vector<int>
// #define  vll              std::vector<ll>
// #define  qui              qu
// #define  pb               push_back
// #define  mpsi             std::map<string, int>







// int main()
// {
// 	//freopen("input.txt", "r", stdin);
//     //freopen("output.txt", "w", stdout);

//     int n=Int;
//     while(n--)
//     {
//     	int a1,a2,b1,b2,c1,c2;
//     	cin>>a1>>a2>>b1>>b2>>c1>>c2;
//     	int t1,t2,l1,l2,r1,r2;

//     	//top
//     	if(a1<b1 && a1<c1) t1=a1,t2=a2;
//     	else if(b1<a1 && b1<c1) t1=b1,t2=b2;
//     	else if(c1<a1 && c1<b1) t1=c1,t2=c2;

//     	//left

//     	if()



//     } 
//     return 0;
// }






/******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
/*********************_BSMRSTU_**********************/
/*.................Mohammad Imran................*/
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
#define pi                 acos(-1.0)
#define For1(i,n)          for (ll i=1;i<=n;i++)
#define For2(i,n)          for (int i=1;i<=n;i++)

/*...........Part-03...........*/
int Int()              {int x; scanf("%d",&x); return x;}
ll Long()              {ll x; scanf("%lld",&x); return x;}
float Float()          {float x; scanf("%f",&x); return x;}
double Double()        {double x; scanf("%lf",&x); return x;}

/*...........Part-04...........*/
#define     Int         Int()
#define     Long        Long()
#define     Float       Float()
#define     Double      Double()

/*..........Part-05...........*/
const int N          =     (int)2e5 + 5 ;
const int maxN       =     (int)1e6 + 6 ;
const ll  Mod        =     (ll)1e9 + 7 ;
const int inf        =     (int)2e9 ;
const ll  Inf        =     (ll)1e18 ;
const int mod        =     (int)1e9 + 7 ;

/*..........Drive Code...........*/
int main(){
    
    ios::sync_with_stdio(false);cin.tie(0);
    ll n;cin>>n;
    unordered_set<ll> myset;
    vector <ll> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        myset.insert(vec[i]);
    }
    ll last;
    for(int i=0;i<n;i++){
        if(myset.find(vec[i]*2)!=myset.end()){
            continue;
        }
        if(vec[i]%3==0 && myset.find(vec[i]/3)!=myset.end() ){
            continue;
        }
        last=vec[i];
        break;
    }
    stack<ll> myst;
    myst.push(last);
    while(myst.size()!=n){
        ll val=myst.top();
        if(myset.find(val*3)!=myset.end()){
            myst.push(val*3);
        }else{
            myst.push(val/2);
        }
    }
    while(!myst.empty()){
        cout<<myst.top()<<" ";myst.pop();
    }
    return 0;
}