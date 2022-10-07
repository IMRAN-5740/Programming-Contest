// /******>=>=**BISMILLAHIR RAHMANIR RAHIM**=<=<******/
// /*********************_BSMRSTU_**********************/
// /*.................Mohammad Imran................*/
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
// #define For1(i,n)		   for (ll i=1;i<=n;i++)
// #define For2(i,n)		   for (int i=1;i<=n;i++)

// /*...........Part-03...........*/
// int Int()    		   {int x; scanf("%d",&x); return x;}
// ll Long()     		   {ll x; scanf("%lld",&x); return x;}
// float Float()	   	   {float x; scanf("%f",&x); return x;}
// double Double()  	   {double x; scanf("%lf",&x); return x;}

// /*...........Part-04...........*/
// #define     Int         Int()
// #define     Long        Long()
// #define		Float 		Float()
// #define 	Double 		Double()

// /*..........Part-05...........*/
// const int N          = 	   (int)2e5 + 5 ;
// const int maxN       =     (int)1e6 + 6 ;
// const ll  Mod        =     (ll)1e9 + 7 ;
// const int inf        =     (int)2e9 ;
// const ll  Inf        =     (ll)1e18 ;
// const int mod        =     (int)1e9 + 7 ;

// /*..........Drive Code...........*/
// int main(){
// 	ll t;
// 	cin>>t;
// 	while(t--){
// 		ll n;
// 		cin>>n;
// 		ll array[n+1];
// 		ll sum=0;
// 		ll k;
// 		ll odd =0;
// 		ll even=0;
// 		for(ll i=1;i<=n;i++){
// 			cin>>k;
// 			sum+=k;
// 			if(k%2!=0){
// 				odd=k;
// 			}
// 			else if(k%2==0){
// 				even=k;
// 			}
// 		}
// 		if((sum%2!=0)|| (odd && even)){
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int segment[10000];
int preprocess(int input[], int n) { 
    int current_segment = -1; 
    int segment_size = sqrt(n); 
   
    for (int i=0; i<n; i++) { 
        if (i % segment_size == 0) { 
            current_segment++;  //new segment
        } 
        segment[current_segment] += input[i]; 
    } 
    
    return segment_size;
}
int query(int input[], int segment_size, int l, int r) { 
    int sum = 0; 
    
    //loop the first segment
    //until we reach r or a starting index

    while (l < r && l % segment_size != 0) { 
	sum += input[l]; 
	l++; 
    } 

    //Loop until we reach
    //segment that contains r
    while (l + segment_size <= r) {  
        sum += segment[l / segment_size]; 
        l += segment_size; 
    } 
    
    //loop until r
    while (l<=r) { 
        sum += input[l]; 
        l++; 
    } 

    return sum; 
} 

void update(int input[], int segment_size, int i, int val) { 
    int segment_no = i / segment_size; 
    
    segment[segment_no] -= input[i];
    segment[segment_no] += val;
    input[i] = val;
}
int main(){
	int n;
	cin>>n;

}