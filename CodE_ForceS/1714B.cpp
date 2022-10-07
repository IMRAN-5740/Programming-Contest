#include<bits/stdc++.h>
using  namespace  std;
#define ll long long  int
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
   	  int n;
   	  cin>>n;
   	  int a[n];
   	  for(int i=0;i<n;i++)
   	  {
   	  	cin>>a[i];
   	  }
   	  	
   	  map<int,int> mp;
   	  int c=0,d;
   	  for(int i=n-1;i>=0;i--)
   	  {
   	  	mp[a[i]]++;
   	  	if(mp[a[i]]>1){ c=1; d=i; break;}
   	  }
   	  if(c==0) cout<<c<<endl;
   	  else 
   	  {
   	  	cout<<d+1<<endl;

   	  }
 
   }
}