#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,i,x,c=1;;
    cin>>n;
   int  a[n+1];
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    x=a[n-1];
    for(i=0;i<n;i++)
    {
      a[i]=x-a[i];
      if(a[i]%2!=0)
      {
        c=0;
        break;
      }
    }
  if(c==1)
  {
    cout<<"YES"<<endl;
  }else
  {
    cout<<"NO"<<endl;
  }
  }
}