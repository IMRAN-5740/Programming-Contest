// #include<bits/stdc++.h>
// using namespace std;
// typedef     long long    ll;
// typedef     vector<int> vi;
// typedef     vector<long long> vl;
// ll fun(string s,string s1){
//   ll ans=0,i;
//   ll j=0;
//    for(i=s.size()-1;i>=0;i--){
//       if(s[i]==s1[j]){
//          j++;
//       }else ans++;
//       if(j==2) break;
//    }
//    return  ans;
// }
// int main()
// {
//   int t = 1, l = 1;
//   scanf("%d", &t);
//   while (t--) {
//      string s;
//      ll i,j,x,y,n,ans=1e9;
//      vl v;
//      cin>>s;
//      x=fun(s,"00");
//      ans=min(x,ans);
//       x=fun(s,"52");
//      ans=min(x,ans);
//       x=fun(s,"05");
//      ans=min(x,ans);
//       x=fun(s,"57");
//      ans=min(x,ans);
//      cout<<ans<<endl;
//  }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
   // for(int i=2;i<=5;i++){

   //    if(i==3){
   //       cout<<"Welcome to our University"<<endl;
   //    }
   // }
   int res=(1/2+pow(8,0)+5%2+10);
   cout<<res<<endl;
   return 0;
}