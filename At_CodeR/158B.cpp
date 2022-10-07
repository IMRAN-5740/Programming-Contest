// //Unsolved
// #include<bits/stdc++.h>

// #define ll long long
// using namespace std;
// int main(){
// 	ll n,a,i,j,k,b,l,sum,cnt=0,cnt1=0,value;
// 	cin>>n>>a>>b;
// 	sum=a+b;
// 	value=n-sum;
// 	string s,s1;
// 	for( i=0;i<a;i++){
// 	 	s[i]='b';
//      }
// 	for( k=0;k<b;k++){
// 		s1[k]='r';
// 	}
// 	for( j=a;j<b;j++){
// 		s[i]=s1[j];
// 		i++;
// 	}
// 	for(l=0;l<sum;l++){

// 		if(s[l]=='b' ||s[l]=='B' ){
// 			cnt++;
// 		}else if(s[l]=='r'||s[l]=='R'){
// 			cnt1++;
// 		}
// 	}
// 	cout<<cnt+value<<endl;
// 	cnt=0;
// 	return 0;
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ll n,a,b;
  cin>>n>>a>>b;
  ll ab=a+b;
  ll k=n/ab*a;
  ll m=min(a,n%ab);
  cout <<k+m<<endl;
  return 0;
}