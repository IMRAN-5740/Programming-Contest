#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v(26);
int solve()
{
  ll n;
  string s;
  cin>>s;
  n=s.size();
 
  for(int i=0;i<n;i++)
  {
    v[s[i]-'a']++;
  }
  int k=0;
  for(int i=0;i<n;i++)
  {
    int x=s[i]-'a';
  
    if(v[x]>=2)
    {
      v[x]-=1;
    }
    else
    {
      k=i;
      break;
    }
  }
 
  for(int i=k;i<n;i++)
  {
    int x=s[i]-'a';
    if(v[x]>0)
    {
      cout<<s[i];
      v[x]--;
    }
 
  }
  cout<<endl;
  return 0;
}
 
int main()
{

  ll i,test=1;
  cin>>test;
  while(test--)
  {
    solve();    
  }
  return 0;
}