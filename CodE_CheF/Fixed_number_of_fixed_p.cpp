#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() 
{
                  ll t;
                  cin >>t;
                  while(t--)
                  {
                              ll n,k;
                            cin>>n>>k;

                            if(n-k ==1)
                            {
                                cout<<-1;
                            }

                            else if(n==k)
                            {
                                for(ll i=1;i<=n;i++)
                                    cout<<i<< ' ';
                            }
                            
                            else
                            {
                                for(ll i=1;i<=k;i++)
                                    cout <<i<< " ";
                                    cout <<n<< ' ';

                                for(ll i=k+1;i<n;i++)
                                    cout<<i<< " "; 
                            }
                            
                            cout<<endl;
                              t--;
                  }
  return 0;
}