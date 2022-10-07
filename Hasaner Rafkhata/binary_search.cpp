#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n+5];
   for (int i=1;i<=n;i++){
      cin>>arr[i];
   }
   sort(arr+1,arr+n+1);//complexity() n log n)
   cout<<"\n";
   for (int j=1; j<=n; j++){  
      cout<<arr[j]<<" ";
   }
   cout<<"\n";
   int l=1,r=n,cnt=0;
   int k;
   cin>>k;
   while(l<=r){
      int mid=(l+r)/2;
      if (arr[mid]== k){
         cnt++;
         cout<<"Find the value"<<endl;
         cout<<mid<<endl;
         break;
      }
      else if(arr[mid]> k){
         r= mid-1;
      }
      else if(arr[mid]< k){
         l= mid+1;
      }
   }
   if(cnt==0){
   cout<<"Not Found"<<endl;
      }
   return 0;
}
